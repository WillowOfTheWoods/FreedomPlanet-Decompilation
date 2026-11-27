#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_11059()
{
    // event 1930_45
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1930_45_end;
        if (!((((Active*)get_instance(guiicon_452_instances))->alterables->values.get(0)) <= (0))) goto event_1930_45_end;
        if (!((global_values->get(4)) != (0))) goto event_1930_45_end;
        playersensorbottombig_397_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, levellift_2647_instances)) goto event_1930_45_end;
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(16, 1);
        ((Active*)get_instance(levellift_2647_instances))->alterables->flags.enable(3);
    }
    event_1930_45_end: ;
}
void Frames::event_func_11060()
{
    // event 1975_45
    {
        if (!(group_pause_1)) goto event_1975_45_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1975_45_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1975_45_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1975_45_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1975_45_end;
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
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->stop_animation();
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->stop_animation();
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->stop_animation();
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        levelscrollingplatformflame1_2654_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
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
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        ((Active*)get_instance(bubblepatch_806_instances))->stop_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
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
        switchbuttonright_2714_instances.clear_selection();
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        switchbuttonleft_2715_instances.clear_selection();
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        magmaflow_2661_instances.clear_selection();
        for (ObjectIterator it(magmaflow_2661_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1975_45_end: ;
}
void Frames::event_func_11061()
{
    // event 1976_45
    bool or_result_1976_45 = false;
    bool or_temp_result_1976_45_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1976_45_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1976_45_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1976_45_0_end;
        or_result_1976_45 = true;
        or_temp_result_1976_45_0 = true;
    }
    or_event_1976_45_0_end: ;
    // event 1976_45
    bool or_temp_result_1976_45_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1976_45_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1976_45_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1976_45_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1976_45_1_end;
        or_result_1976_45 = true;
        or_temp_result_1976_45_1 = true;
        or_event_1976_45_1_end: ;
        if (!or_result_1976_45) goto or_final_or_event_1976_45_1_end;
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
        enemypushup_2656_instances.clear_selection();
        for (ObjectIterator it(enemypushup_2656_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        ((Active*)get_instance(levelfireplatformflame1_2644_instances))->start_animation();
        ((Active*)get_instance(levelfireplatformflame2_2645_instances))->start_animation();
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->start_animation();
        hazardfireup_2226_instances.clear_selection();
        for (ObjectIterator it(hazardfireup_2226_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        levelscrollingplatformflame1_2654_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformflame1_2654_instances); !it.end(); ++it) {
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
        metaldoorfront_2670_instances.clear_selection();
        for (ObjectIterator it(metaldoorfront_2670_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        metaldoorback_2604_instances.clear_selection();
        for (ObjectIterator it(metaldoorback_2604_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        ((Active*)get_instance(bubblepatch_806_instances))->start_animation();
        mediumbubble_769_instances.clear_selection();
        for (ObjectIterator it(mediumbubble_769_instances); !it.end(); ++it) {
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
        switchbuttonright_2714_instances.clear_selection();
        for (ObjectIterator it(switchbuttonright_2714_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        switchbuttonleft_2715_instances.clear_selection();
        for (ObjectIterator it(switchbuttonleft_2715_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        magmaflow_2661_instances.clear_selection();
        for (ObjectIterator it(magmaflow_2661_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeycard_2643_instances.clear_selection();
        for (ObjectIterator it(objectkeycard_2643_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyhomingbullet_2568_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1976_45_1_end: ;
}
void Frames::handle_frame_46_events()
{
    test_collisions_45();
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
    event_func_10837();
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
    event_func_10951();
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
    event_func_10952();
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
    event_func_10953();
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
    event_func_10954();
    event_func_10955();
    event_func_10956();
    event_func_10957();
    event_func_10958();
    event_func_10959();
    event_func_10960();
    event_func_10961();
    event_func_10962();
    event_func_10963();
    event_func_10964();
    event_func_10965();
    event_func_10966();
    event_func_10967();
    event_func_10968();
    event_func_10969();
    event_func_10970();
    event_func_10971();
    event_func_10972();
    event_func_10973();
    event_func_10974();
    event_func_10779();
    event_func_10780();
    event_func_10781();
    event_func_10782();
    event_func_10783();
    event_func_10784();
    event_func_10785();
    event_func_10786();
    event_func_10787();
    event_func_10798();
    event_func_10800();
    event_func_10975();
    event_func_10976();
    event_func_10977();
    event_func_10978();
    event_func_10979();
    event_func_10980();
    event_func_10981();
    event_func_10982();
    event_func_10983();
    event_func_10984();
    event_func_10985();
    event_func_10986();
    event_func_10987();
    event_func_10988();
    event_func_10989();
    event_func_10990();
    event_func_10991();
    event_func_10992();
    event_func_10993();
    event_func_10994();
    event_func_10995();
    event_func_10996();
    event_func_10997();
    event_func_10998();
    event_func_10999();
    event_func_11000();
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
    event_func_11001();
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
    event_func_11002();
    event_func_11003();
    event_func_10829();
    event_func_10830();
    event_func_10831();
    event_func_10832();
    event_func_10833();
    event_func_10834();
    event_func_10835();
    event_func_10836();
    event_func_10838();
    event_func_10839();
    event_func_10840();
    event_func_10841();
    event_func_10842();
    event_func_10843();
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
    event_func_11022();
    event_func_11023();
    event_func_11024();
    event_func_11025();
    event_func_11026();
    event_func_11027();
    event_func_11028();
    event_func_11029();
    event_func_11030();
    event_func_11031();
    event_func_11032();
    event_func_11033();
    event_func_11034();
    event_func_11035();
    event_func_11036();
    event_func_11037();
    event_func_11038();
    event_func_11039();
    event_func_11040();
    event_func_11041();
    event_func_11042();
    event_func_11043();
    event_func_11044();
    event_func_11045();
    event_func_11046();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
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
    event_func_11047();
    event_func_11048();
    event_func_10864();
    event_func_10865();
    event_func_10866();
    event_func_10867();
    event_func_10868();
    event_func_10869();
    event_func_10869();
    event_func_10870();
    event_func_10870();
    event_func_10871();
    event_func_10871();
    event_func_10872();
    event_func_10873();
    event_func_10873();
    event_func_10874();
    event_func_10875();
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
    event_func_11049();
    event_func_11050();
    event_func_11051();
    event_func_11052();
    event_func_11053();
    event_func_11054();
    event_func_11055();
    event_func_11056();
    event_func_11057();
    event_func_11058();
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
    event_func_11059();
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
    event_func_10931();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_11060();
    event_func_11061();
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
void Frames::handle_frame_46_pre_events()
{
}
void Frames::event_func_11062()
{
    // event 2_45
    {
        if (!(group_main_engine_1)) goto event_2_45_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 3200);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 62);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 27);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_2_45_end: ;
}
void Frames::event_func_11063()
{
    // event 19_45
    {
        if (!(group_main_engine_1)) goto event_19_45_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.93);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.91);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.84);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.6);
    }
    event_19_45_end: ;
}
void Frames::event_func_11064()
{
    // event 1405_45
    {
        if (!(group_main_engine_1)) goto event_1405_45_end;
        levellift_2647_instances.clear_selection();
        levellifttop_2650_instances.clear_selection();
        if (!check_overlap(levellift_2647_instances, levellifttop_2650_instances)) goto event_1405_45_end;
        ((Active*)get_instance(levellift_2647_instances))->alterables->values.set(16, 2);
    }
    event_1405_45_end: ;
}
void Frames::event_func_11065()
{
    // event 1417_45
    {
        if (!(group_main_engine_1)) goto event_1417_45_end;
        levelfireplatform1_2646_instances.clear_selection();
        spread_value(levelfireplatform1_2646_instances, 17, 0);
        ((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.set(17, ((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(17)%math_helper%2);
        ((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.set(4, ((Active*)get_instance(levelfireplatform1_2646_instances))->alterables->values.get(17)*189);
    }
    event_1417_45_end: ;
}
void Frames::event_func_11066()
{
    // event 1427_45
    {
        if (!(group_main_engine_1)) goto event_1427_45_end;
        levelscrollingplatform1_2662_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatform1_2662_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(19, ((Active*)*it)->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(20, ((Active*)get_instance(levelscrollingplatformend_2664_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(21, ((Active*)get_instance(levelscrollingplatformstart_2665_instances, it.current_index, default_active_instance))->get_x());
        }
        levelscrollingplatformend_2664_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformend_2664_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        levelscrollingplatformstart_2665_instances.clear_selection();
        for (ObjectIterator it(levelscrollingplatformstart_2665_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1427_45_end: ;
}
void Frames::event_func_11067()
{
    // event 1440_45
    {
        if (!(group_main_engine_1)) goto event_1440_45_end;
        levelpistonplatform1_2717_instances.clear_selection();
        spread_value(levelpistonplatform1_2717_instances, 4, 0);
        for (ObjectIterator it(levelpistonplatform1_2717_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)*180)%math_helper%360);
        }
        levelspinplatform_2718_instances.clear_selection();
        spread_value(levelspinplatform_2718_instances, 0, 0);
        for (ObjectIterator it(levelspinplatform_2718_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(0)*90);
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*90);
        }
    }
    event_1440_45_end: ;
}
void Frames::event_func_11068()
{
    // event 1445_45
    {
        if (!(group_main_engine_1)) goto event_1445_45_end;
        hazardlavafall_2720_instances.clear_selection();
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y());
        }
        spread_value(hazardlavafall_2720_instances, 2, 0);
        for (ObjectIterator it(hazardlavafall_2720_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, (((Active*)*it)->alterables->values.get(2)%math_helper%4)*112);
        }
        {
            hazardlavapit_2719_instances.clear_selection();
            SavedSelection extra_hazardlavapit_2719_instances(hazardlavapit_2719_instances);
            for (SavedIterator it(extra_hazardlavapit_2719_instances); !it.end(); ++it) {
                foreach_instance_lv = ((Active*)*it);
                foreach_lv_45();
            }
        }
    }
    event_1445_45_end: ;
}
void Frames::event_func_11069()
{
    // event 1646_45
    {
        if (!(group_main_engine_1)) goto event_1646_45_end;
        enemylavasquid_2721_instances.clear_selection();
        pick_objects_in_zone(enemylavasquid_2721_instances, 4364, 2452, 4516, 3166);
        for (ObjectIterator it(enemylavasquid_2721_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1646_45_end: ;
}
void Frames::event_func_11070()
{
    // event 1673_45
    {
        if (!(group_main_engine_1)) goto event_1673_45_end;
        ((Active*)get_instance(minibosstrapdoor_2722_instances))->alterables->values.set(0, ((Active*)get_instance(minibosstrapdoor_2722_instances))->get_x());
        enemywallpusher_2723_instances.clear_selection();
        for (ObjectIterator it(enemywallpusher_2723_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1673_45_end: ;
}
void Frames::event_func_11071()
{
    // event 1757_45
    {
        if (!(group_main_engine_1)) goto event_1757_45_end;
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.set(0, ((Active*)get_instance(npcsyntaxeye_2609_instances))->get_x());
        ((Active*)get_instance(npcsyntaxeye_2609_instances))->alterables->values.set(1, ((Active*)get_instance(npcsyntaxeye_2609_instances))->get_y());
    }
    event_1757_45_end: ;
}
void Frames::event_func_11072()
{
    // event 1921_45
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1921_45_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(6);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(5);
        }
    }
    event_1921_45_end: ;
}
void Frames::event_func_11073()
{
    // event 1922_45
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1922_45_end;
        if (!((global_values->get(4)) > (0))) goto event_1922_45_end;
        {
            loop_gui_shiftup_running = true;
            int times = int(40);
            loop_gui_shiftup_index = 0;
            while (loop_gui_shiftup_index < times) {
                loop_gui_shiftup_44();
                if (!loop_gui_shiftup_running) break;
                loop_gui_shiftup_index++;
            }
        }
    }
    event_1922_45_end: ;
}
void Frames::on_frame_46_start_events()
{
    event_func_4133();
    event_func_11062();
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
    event_func_11063();
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
    event_func_11064();
    event_func_11065();
    event_func_11066();
    event_func_11067();
    event_func_11068();
    event_func_10707();
    event_func_10939();
    event_func_10940();
    event_func_11069();
    event_func_11070();
    event_func_2686();
    event_func_2687();
    event_func_10941();
    event_func_11071();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_11072();
    event_func_11073();
    event_func_4146();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_46_init()
{
    index = 45;
    width = 7360;
    height = 4800;
    virtual_width = 7360;
    virtual_height = 4800;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &airventplatform_2668_instances, &levelfireplatform1_2646_instances, &levelpistonplatform1_2717_instances, &levelspinplatform_2718_instances, NULL};
    qualifier_8.set(13, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &airventplatform_2668_instances, &hazardspikesup_558_instances, &levelfireplatform1_2646_instances, &levelpistonplatform1_2717_instances, &levelspinplatform_2718_instances, NULL};
    qualifier_9.set(36, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyelitemask_2511_instances, &enemyseeker_2648_instances, &enemypushuphitbox_2653_instances, &enemylavasquiddebris_2677_instances, &enemyseeker3_2710_instances, &enemyseeker2_2711_instances, &enemylavasquid_2721_instances, &enemywallpusher_2723_instances, NULL};
    qualifier_20.set(8, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(6, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &levellift_2647_instances, &levelscrollingplatform1_2662_instances, &lockeddoorbarrier_2667_instances, &hazardspikesup_558_instances, &objectexplosiveblock_2708_instances, &minibosstrapdoor_2722_instances, NULL};
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
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelfireplatform1_2646_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levellift_2647_instances, &levelscrollingplatform1_2662_instances, &levelfireplatform1_2646_instances, &levelpistonplatform1_2717_instances, &levelspinplatform_2718_instances, NULL};
    qualifier_13.set(6, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2563(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_2564(0, 128), 0);
    add_background_object(create_levelparallaxpiece2_2565(0, 288), 0);
    add_background_object(create_levelparallaxpiece5_2566(0, 512), 0);
    add_background_object(create_levelparallaxpiece6_2567(0, 696), 0);
    add_background_object(create_levelparallaxpiece7_2675(0, 1112), 0);
    add_object(create_bubblepatch_806(-544, 319), 1);
    add_background_object(create_tbwall3_2573(3792, 2400), 2);
    add_background_object(create_tbtunneltop1_2577(5800, 2176), 2);
    add_background_object(create_tbtunneltop1_2577(5544, 2176), 2);
    add_background_object(create_tbtunnelbottom1_2576(5800, 2304), 2);
    add_background_object(create_tbtunnelbottom1_2576(5544, 2304), 2);
    add_background_object(create_tbtunnelbottom1_2576(6176, 2368), 2);
    add_background_object(create_tbtunnelbottom1_2576(6304, 2368), 2);
    add_background_object(create_tbtunneltop1_2577(6176, 2176), 2);
    add_background_object(create_tbtunneltop1_2577(6304, 2176), 2);
    add_background_object(create_tbwall14_2679(6816, 2720), 2);
    add_background_object(create_tbwall18_2680(6816, 2816), 2);
    add_background_object(create_tbwall14_2679(6720, 2720), 2);
    add_background_object(create_tbwall18_2680(6720, 2816), 2);
    add_background_object(create_tbwall1_2575(6816, 2624), 2);
    add_background_object(create_tbwall1_2575(6720, 2624), 2);
    add_background_object(create_tbwall1_2575(6336, 2624), 2);
    add_background_object(create_tbwall1_2575(6240, 2624), 2);
    add_background_object(create_tbwall1_2575(6336, 2528), 2);
    add_background_object(create_tbwall1_2575(6240, 2528), 2);
    add_background_object(create_tbtunneltop4_2583(1408, 2016), 2);
    add_background_object(create_tbtunnelbottom4_2584(1408, 2176), 2);
    add_background_object(create_tbtunneltop1_2577(512, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(512, 2176), 2);
    add_background_object(create_tbtunneltop1_2577(240, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(112, 2176), 2);
    add_background_object(create_tbtunnelbottom1_2576(240, 2176), 2);
    add_background_object(create_tbtunneltop1_2577(112, 2048), 2);
    add_background_object(create_tbwalledge1_2581(576, 2048), 2);
    add_background_object(create_tbwall3_2573(384, 2144), 2);
    add_background_object(create_tbwalledge2_2594(336, 2048), 2);
    add_background_object(create_tbwall1_2575(384, 2048), 2);
    add_background_object(create_tbwall1_2575(480, 2048), 2);
    add_background_object(create_tbtunnelwall_2578(3608, 2128), 2);
    add_background_object(create_tbtunnelwall_2578(2808, 2112), 2);
    add_background_object(create_tbtunneltop1_2577(2760, 2064), 2);
    add_background_object(create_tbtunneltop1_2577(3560, 2064), 2);
    add_background_object(create_tbtunnelbottom1_2576(3048, 2192), 2);
    add_background_object(create_tbtunnelbottom1_2576(3176, 2192), 2);
    add_background_object(create_tbtunnelbottom1_2576(3304, 2192), 2);
    add_background_object(create_tbtunnelbottom1_2576(3432, 2192), 2);
    add_background_object(create_tbtunnelbottom1_2576(3560, 2192), 2);
    add_background_object(create_tbwalledge3_2600(2160, 2304), 2);
    add_background_object(create_tbwalledge2_2594(2208, 2304), 2);
    add_background_object(create_tbtunneltop1_2577(1824, 2144), 2);
    add_background_object(create_tbtunneltop1_2577(1696, 2144), 2);
    add_background_object(create_tbwall1_2575(1872, 2304), 2);
    add_background_object(create_tbwall1_2575(1968, 2304), 2);
    add_background_object(create_tbwall1_2575(2064, 2304), 2);
    add_background_object(create_tbwall1_2575(1968, 2400), 2);
    add_background_object(create_tbwall3_2573(1536, 2144), 2);
    add_background_object(create_tbwall3_2573(1920, 2144), 2);
    add_background_object(create_tbwall1_2575(2016, 2496), 2);
    add_background_object(create_tbwall14_2679(1952, 2784), 2);
    add_background_object(create_tbwall18_2680(2016, 2880), 2);
    add_background_object(create_tbwall1_2575(1776, 2400), 2);
    add_background_object(create_tbwall1_2575(1872, 2400), 2);
    add_background_object(create_tbwall1_2575(2064, 2400), 2);
    add_background_object(create_tbwall1_2575(2112, 2496), 2);
    add_background_object(create_tbwall14_2679(2048, 2784), 2);
    add_background_object(create_tbwall1_2575(1952, 2592), 2);
    add_background_object(create_tbwall1_2575(2048, 2592), 2);
    add_background_object(create_tbwall1_2575(2016, 2688), 2);
    add_background_object(create_tbwall1_2575(2112, 2688), 2);
    add_background_object(create_tbwall18_2680(2112, 2880), 2);
    add_background_object(create_tbwalledge1_2581(1728, 2048), 2);
    add_background_object(create_tbwalledge2_2594(1872, 2048), 2);
    add_background_object(create_tbliftback_2597(3680, 2976), 2);
    add_background_object(create_tbliftback_2597(3680, 2880), 2);
    add_background_object(create_tbliftback_2597(3680, 2784), 2);
    add_background_object(create_tbliftback_2597(3680, 2688), 2);
    add_background_object(create_tbliftback_2597(3680, 2592), 2);
    add_background_object(create_tbliftback_2597(3680, 3072), 2);
    add_background_object(create_tbliftback_2597(3680, 3168), 2);
    add_background_object(create_tbwall3_2573(2112, 2144), 2);
    add_background_object(create_tbwall3_2573(2256, 2400), 2);
    add_background_object(create_tbwall1_2575(1776, 2304), 2);
    add_background_object(create_tbwall3_2573(2264, 2144), 2);
    add_background_object(create_tbliftback_2597(3680, 2496), 2);
    add_background_object(create_backdrop36_2601(3680, 2496), 2);
    add_background_object(create_tbwall3_2573(2448, 2400), 2);
    add_background_object(create_tbwall3_2573(2640, 2400), 2);
    add_background_object(create_tbwall3_2573(2832, 2400), 2);
    add_background_object(create_tbwall1_2575(2832, 2304), 2);
    add_background_object(create_tbwall1_2575(2448, 2304), 2);
    add_background_object(create_tbwall1_2575(2544, 2304), 2);
    add_background_object(create_tbwall1_2575(2736, 2304), 2);
    add_background_object(create_tbwall1_2575(2640, 2304), 2);
    add_background_object(create_tbwall1_2575(3680, 2160), 2);
    add_background_object(create_tbwall1_2575(3680, 2064), 2);
    add_background_object(create_tbwalledge4_2599(3632, 2064), 2);
    add_background_object(create_tbtunneltop1_2577(3048, 2064), 2);
    add_background_object(create_tbtunneltop1_2577(3176, 2064), 2);
    add_background_object(create_tbtunneltop1_2577(3304, 2064), 2);
    add_background_object(create_tbtunneltop1_2577(3432, 2064), 2);
    add_background_object(create_tbtunnelwall_2578(3096, 2128), 2);
    add_background_object(create_tbtunnelwall_2578(3224, 2128), 2);
    add_background_object(create_tbtunnelwall_2578(3352, 2128), 2);
    add_background_object(create_tbtunnelwall_2578(3480, 2128), 2);
    add_background_object(create_tbspinningplatformring1_2681(3968, 3200), 2);
    add_background_object(create_tbspinningplatformring2_2682(4288, 3200), 2);
    add_background_object(create_tbwall14_2679(4112, 2720), 2);
    add_background_object(create_tbwall18_2680(4112, 2816), 2);
    add_background_object(create_tbwall18_2680(4208, 2816), 2);
    add_background_object(create_tbwall14_2679(4208, 2720), 2);
    add_background_object(create_tbwall1_2575(4112, 2528), 2);
    add_background_object(create_tbwall1_2575(4208, 2528), 2);
    add_background_object(create_tbwalledge1_2581(96, 2048), 2);
    add_background_object(create_tbwall1_2575(0, 2048), 2);
    add_background_object(create_tbwall3_2573(-96, 2144), 2);
    add_background_object(create_tbsyntaxpanel1_2602(432, 2088), 2);
    add_background_object(create_tbliftback_2597(544, 2240), 2);
    add_background_object(create_tbtunnelwall_2578(160, 2112), 2);
    add_background_object(create_tbtunnelwall_2578(288, 2112), 2);
    add_background_object(create_tbliftback_2597(544, 2432), 2);
    add_background_object(create_tbliftback_2597(544, 2336), 2);
    add_background_object(create_tbwalledge2_2594(1488, 2048), 2);
    add_background_object(create_tbtunneltop1_2577(896, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(896, 2176), 2);
    add_background_object(create_tbtunnelwall_2578(944, 2112), 2);
    add_background_object(create_tbtunneltop1_2577(768, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(768, 2176), 2);
    add_background_object(create_tbtunnelwall_2578(816, 2112), 2);
    add_background_object(create_tbtunneltop1_2577(640, 2048), 2);
    add_background_object(create_tbtunnelbottom1_2576(640, 2176), 2);
    add_background_object(create_tbtunnelwall_2578(688, 2112), 2);
    add_background_object(create_tbtunnelbottom7_2593(1152, 2120), 2);
    add_background_object(create_tbtunnelbottom5_2590(1024, 2176), 2);
    add_background_object(create_tbtunnelbottom2_2588(1280, 2120), 2);
    add_background_object(create_tbtunneltop2_2587(1280, 1984), 2);
    add_background_object(create_tbtunneltop5_2589(1024, 2016), 2);
    add_background_object(create_tbtunneltop7_2592(1152, 1984), 2);
    add_background_object(create_tbtunnelwall_2578(1072, 2112), 2);
    add_background_object(create_tbtunnelwall_2578(1200, 2056), 2);
    add_background_object(create_tbtunnelwall_2578(1328, 2056), 2);
    add_background_object(create_tbtunnelwall_2578(1456, 2112), 2);
    add_background_object(create_tbwall14_2679(4672, 2688), 2);
    add_background_object(create_tbwall18_2680(4672, 2784), 2);
    add_background_object(create_tbwall18_2680(4768, 2784), 2);
    add_background_object(create_tbwall14_2679(4768, 2688), 2);
    add_background_object(create_tbwall14_2679(5344, 2688), 2);
    add_background_object(create_tbwall14_2679(5440, 2688), 2);
    add_background_object(create_tbwall18_2680(5440, 2784), 2);
    add_background_object(create_tbwall1_2575(5440, 2592), 2);
    add_background_object(create_tbwall14_2679(5536, 2688), 2);
    add_background_object(create_tbwall18_2680(5536, 2784), 2);
    add_background_object(create_tbwall1_2575(5536, 2592), 2);
    add_background_object(create_tbwall14_2679(5632, 2688), 2);
    add_background_object(create_tbwall18_2680(5632, 2784), 2);
    add_background_object(create_tbwall1_2575(5632, 2592), 2);
    add_background_object(create_tbwall1_2575(5344, 2592), 2);
    add_background_object(create_tbwall1_2575(5248, 2592), 2);
    add_background_object(create_tbwall18_2680(5344, 2784), 2);
    add_background_object(create_tbwall14_2679(4960, 2688), 2);
    add_background_object(create_tbwall14_2679(5056, 2688), 2);
    add_background_object(create_tbwall18_2680(5056, 2784), 2);
    add_background_object(create_tbwall14_2679(5152, 2688), 2);
    add_background_object(create_tbwall18_2680(5152, 2784), 2);
    add_background_object(create_tbwall14_2679(5248, 2688), 2);
    add_background_object(create_tbwall18_2680(5248, 2784), 2);
    add_background_object(create_tbwall18_2680(4960, 2784), 2);
    add_background_object(create_tbwall14_2679(4864, 2688), 2);
    add_background_object(create_tbwall18_2680(4864, 2784), 2);
    add_background_object(create_tbwall18_2680(5056, 2880), 2);
    add_background_object(create_tbwall18_2680(5152, 2880), 2);
    add_background_object(create_tbwall18_2680(4960, 2880), 2);
    add_background_object(create_tbwall18_2680(4864, 2880), 2);
    add_background_object(create_tbspinningplatformring1_2681(4416, 3200), 2);
    add_background_object(create_tbliftback_2597(6992, 3072), 2);
    add_background_object(create_tbliftback_2597(6992, 3168), 2);
    add_background_object(create_tbliftback_2597(6992, 3264), 2);
    add_background_object(create_tbliftback_2597(6992, 3360), 2);
    add_background_object(create_tbliftback_2597(6992, 3456), 2);
    add_background_object(create_tbliftback_2597(6992, 3552), 2);
    add_background_object(create_tbcautionline_2683(6976, 3072), 2);
    add_background_object(create_tbcautionline_2683(6976, 3168), 2);
    add_background_object(create_tbcautionline_2683(6976, 3264), 2);
    add_background_object(create_tbcautionline_2683(6976, 3360), 2);
    add_background_object(create_tbcautionline_2683(6976, 3456), 2);
    add_background_object(create_tbcautionline_2683(6976, 3552), 2);
    add_background_object(create_tbcautionline_2683(7088, 3072), 2);
    add_background_object(create_tbcautionline_2683(7088, 3168), 2);
    add_background_object(create_tbcautionline_2683(7088, 3264), 2);
    add_background_object(create_tbcautionline_2683(7088, 3360), 2);
    add_background_object(create_tbcautionline_2683(7088, 3456), 2);
    add_background_object(create_tbcautionline_2683(7088, 3552), 2);
    add_background_object(create_tbcautionline_2683(4928, 2688), 2);
    add_background_object(create_tbcautionline_2683(4928, 2784), 2);
    add_background_object(create_tbcautionline_2683(4928, 2880), 2);
    add_background_object(create_tbcautionline_2683(4848, 2688), 2);
    add_background_object(create_tbcautionline_2683(4848, 2784), 2);
    add_background_object(create_tbspinningplatformring2_2682(6792, 2688), 2);
    add_background_object(create_tbspinningplatformring3_2684(6792, 2816), 2);
    add_background_object(create_tbwall1_2575(2928, 2304), 2);
    add_background_object(create_tbwall1_2575(3024, 2304), 2);
    add_background_object(create_tbwall1_2575(3120, 2304), 2);
    add_background_object(create_tbwall3_2573(3024, 2400), 2);
    add_background_object(create_tbwall3_2573(3216, 2400), 2);
    add_background_object(create_tbwall1_2575(3216, 2304), 2);
    add_background_object(create_tbwall1_2575(3312, 2304), 2);
    add_background_object(create_tbwall1_2575(3408, 2304), 2);
    add_background_object(create_tbwall1_2575(3504, 2304), 2);
    add_background_object(create_tbwall3_2573(3408, 2400), 2);
    add_background_object(create_tbwall1_2575(3600, 2304), 2);
    add_background_object(create_tbwall3_2573(3600, 2400), 2);
    add_background_object(create_tbwall1_2575(3696, 2304), 2);
    add_background_object(create_tbwalledge3_2600(3016, 2064), 2);
    add_background_object(create_tbwall1_2575(2920, 2064), 2);
    add_background_object(create_tbwall1_2575(2920, 2160), 2);
    add_background_object(create_tbtunnelbottom1_2576(2504, 2256), 2);
    add_background_object(create_tbtunnelbottom7_2593(2760, 2200), 2);
    add_background_object(create_tbtunnelbottom5_2590(2632, 2256), 2);
    add_background_object(create_tbwalledge4_2599(2872, 2064), 2);
    add_background_object(create_tbtunnelwall_2578(2808, 2136), 2);
    add_background_object(create_tbtunneltop1_2577(2632, 2064), 2);
    add_background_object(create_tbtunneltop1_2577(2504, 2064), 2);
    add_background_object(create_tbtunnelwall_2578(2680, 2128), 2);
    add_background_object(create_tbtunnelwall_2578(2680, 2192), 2);
    add_background_object(create_tbtunnelwall_2578(2552, 2128), 2);
    add_background_object(create_tbtunnelwall_2578(2552, 2192), 2);
    add_background_object(create_tbwalledge1_2581(2456, 2048), 2);
    add_background_object(create_tbwall18_2680(2640, 2496), 2);
    add_background_object(create_tbwall18_2680(2736, 2496), 2);
    add_background_object(create_tbwall18_2680(2832, 2496), 2);
    add_background_object(create_tbwall18_2680(2928, 2496), 2);
    add_background_object(create_tbwall18_2680(3024, 2496), 2);
    add_background_object(create_tbwall18_2680(3120, 2496), 2);
    add_background_object(create_tbwall18_2680(3216, 2496), 2);
    add_background_object(create_tbwall18_2680(3312, 2496), 2);
    add_background_object(create_tbwall18_2680(3408, 2496), 2);
    add_background_object(create_tbwall18_2680(3504, 2496), 2);
    add_background_object(create_tbwall14_2679(6336, 2720), 2);
    add_background_object(create_tbwall14_2679(6240, 2720), 2);
    add_background_object(create_tbwall14_2679(6144, 2720), 2);
    add_background_object(create_tbwall18_2680(6112, 2784), 2);
    add_background_object(create_tbwall1_2575(6144, 2624), 2);
    add_background_object(create_tbwall14_2679(6048, 2720), 2);
    add_background_object(create_tbwall18_2680(6016, 2784), 2);
    add_background_object(create_tbwall1_2575(6048, 2624), 2);
    add_background_object(create_tbwall1_2575(6144, 2528), 2);
    add_background_object(create_tbwall1_2575(6048, 2528), 2);
    add_background_object(create_tbwall1_2575(6528, 2624), 2);
    add_background_object(create_tbwall1_2575(6432, 2624), 2);
    add_background_object(create_tbwall1_2575(6816, 2528), 2);
    add_background_object(create_tbwall1_2575(6720, 2528), 2);
    add_background_object(create_tbwall1_2575(6528, 2528), 2);
    add_background_object(create_tbwall1_2575(6432, 2528), 2);
    add_background_object(create_tbwall1_2575(6624, 2624), 2);
    add_background_object(create_tbwall1_2575(6624, 2528), 2);
    add_background_object(create_tbwall14_2679(6624, 2720), 2);
    add_background_object(create_tbwall18_2680(6624, 2816), 2);
    add_background_object(create_tbwall14_2679(6528, 2720), 2);
    add_background_object(create_tbwall14_2679(6432, 2720), 2);
    add_background_object(create_tbwall18_2680(6208, 3392), 2);
    add_background_object(create_tbwall18_2680(6208, 3488), 2);
    add_background_object(create_tbwall18_2680(6208, 3584), 2);
    add_background_object(create_tbwall18_2680(6304, 3392), 2);
    add_background_object(create_tbwall18_2680(6304, 3488), 2);
    add_background_object(create_tbwall18_2680(6400, 3392), 2);
    add_background_object(create_tbwall18_2680(6400, 3488), 2);
    add_background_object(create_tbwall18_2680(6496, 3392), 2);
    add_background_object(create_tbwall18_2680(6496, 3488), 2);
    add_background_object(create_tbwall18_2680(6592, 3392), 2);
    add_background_object(create_tbwall18_2680(6592, 3488), 2);
    add_background_object(create_tbcautionline_2683(6688, 3392), 2);
    add_background_object(create_tbcautionline_2683(6688, 3488), 2);
    add_background_object(create_tbwall18_2680(6400, 3296), 2);
    add_background_object(create_tbwall18_2680(6496, 3296), 2);
    add_background_object(create_tbwall18_2680(6400, 3200), 2);
    add_background_object(create_tbwall18_2680(6496, 3200), 2);
    add_background_object(create_tbwall18_2680(6400, 3104), 2);
    add_background_object(create_tbwall18_2680(6496, 3104), 2);
    add_background_object(create_tbwall18_2680(6400, 3008), 2);
    add_background_object(create_tbwall18_2680(6496, 3008), 2);
    add_background_object(create_tbcautionline_2683(6384, 3008), 2);
    add_background_object(create_tbcautionline_2683(6384, 3104), 2);
    add_background_object(create_tbwalllight_2582(2048, 2144), 2);
    add_background_object(create_tbwalllight_2582(2160, 2144), 2);
    add_background_object(create_tbwalllight_2582(2272, 2144), 2);
    add_background_object(create_tbwall14_2679(4016, 2720), 2);
    add_background_object(create_tbwall18_2680(4016, 2816), 2);
    add_background_object(create_tbwall1_2575(4016, 2528), 2);
    add_background_object(create_tbwall14_2679(3920, 2720), 2);
    add_background_object(create_tbwall18_2680(3920, 2816), 2);
    add_background_object(create_tbwall1_2575(3920, 2528), 2);
    add_background_object(create_tbwall1_2575(4016, 2432), 2);
    add_background_object(create_tbwall1_2575(3920, 2432), 2);
    add_background_object(create_tbwall1_2575(4016, 2336), 2);
    add_background_object(create_tbwall1_2575(3920, 2336), 2);
    add_background_object(create_tbwall1_2575(4016, 2240), 2);
    add_background_object(create_tbwall1_2575(3920, 2240), 2);
    add_background_object(create_tbwall1_2575(3920, 2144), 2);
    add_background_object(create_tbwall2_2580(4016, 2144), 2);
    add_background_object(create_tbwalledge4_2599(3872, 2048), 2);
    add_background_object(create_tbwalledge3_2600(3776, 2064), 2);
    add_background_object(create_tbwall1_2575(3920, 2048), 2);
    add_background_object(create_tbwall1_2575(4016, 2048), 2);
    add_background_object(create_tbwall1_2575(4112, 2048), 2);
    add_background_object(create_tbwall1_2575(4208, 2048), 2);
    add_background_object(create_tbwall1_2575(4208, 2144), 2);
    add_background_object(create_tbwall1_2575(4304, 2144), 2);
    add_background_object(create_tbwall1_2575(4400, 2144), 2);
    add_background_object(create_tbwall1_2575(4496, 2144), 2);
    add_background_object(create_tbwall1_2575(4112, 2432), 2);
    add_background_object(create_tbwall1_2575(4112, 2336), 2);
    add_background_object(create_tbwall1_2575(4112, 2240), 2);
    add_background_object(create_tbwall1_2575(4208, 2432), 2);
    add_background_object(create_tbwall1_2575(4208, 2336), 2);
    add_background_object(create_tbwall1_2575(4208, 2240), 2);
    add_background_object(create_tbwall1_2575(4304, 2432), 2);
    add_background_object(create_tbwall1_2575(4304, 2336), 2);
    add_background_object(create_tbwall1_2575(4304, 2240), 2);
    add_background_object(create_tbwall1_2575(4400, 2432), 2);
    add_background_object(create_tbwall1_2575(4400, 2336), 2);
    add_background_object(create_tbwall1_2575(4400, 2240), 2);
    add_background_object(create_tbwall1_2575(4304, 2528), 2);
    add_background_object(create_tbwall1_2575(4400, 2528), 2);
    add_background_object(create_tbwall1_2575(4016, 2624), 2);
    add_background_object(create_tbwall1_2575(3920, 2624), 2);
    add_background_object(create_tbwall1_2575(4112, 2624), 2);
    add_background_object(create_tbwall1_2575(4208, 2624), 2);
    add_background_object(create_tbwall18_2680(4304, 2816), 2);
    add_background_object(create_tbwall18_2680(4400, 2816), 2);
    add_background_object(create_tbwall18_2680(4496, 2816), 2);
    add_background_object(create_tbwall1_2575(6448, 2176), 2);
    add_background_object(create_tbwall3_2573(6448, 2272), 2);
    add_background_object(create_tbwall1_2575(6544, 2176), 2);
    add_background_object(create_tbwall1_2575(6304, 2432), 2);
    add_background_object(create_tbwall1_2575(6208, 2432), 2);
    add_background_object(create_tbwalledge2_2594(6400, 2176), 2);
    add_background_object(create_tbwalledge1_2581(6160, 2176), 2);
    add_background_object(create_tbwall1_2575(5968, 2176), 2);
    add_background_object(create_tbwall3_2573(5968, 2272), 2);
    add_background_object(create_tbwall1_2575(6064, 2176), 2);
    add_background_object(create_tbwall1_2575(4592, 2144), 2);
    add_background_object(create_tbwall1_2575(4688, 2144), 2);
    add_background_object(create_tbwall1_2575(4784, 2144), 2);
    add_background_object(create_tbwall1_2575(4880, 2144), 2);
    add_background_object(create_tbwall1_2575(4592, 2240), 2);
    add_background_object(create_tbwall1_2575(4688, 2240), 2);
    add_background_object(create_tbwall1_2575(4784, 2240), 2);
    add_background_object(create_tbwall1_2575(4880, 2240), 2);
    add_background_object(create_tbwall1_2575(4592, 2336), 2);
    add_background_object(create_tbwall1_2575(4688, 2336), 2);
    add_background_object(create_tbwall1_2575(4784, 2336), 2);
    add_background_object(create_tbwall1_2575(4880, 2336), 2);
    add_background_object(create_tbwall1_2575(4496, 2336), 2);
    add_background_object(create_tbwall1_2575(4496, 2432), 2);
    add_background_object(create_tbwall1_2575(4592, 2432), 2);
    add_background_object(create_tbwall1_2575(4688, 2432), 2);
    add_background_object(create_tbwall1_2575(4784, 2432), 2);
    add_background_object(create_tbwall1_2575(4880, 2432), 2);
    add_background_object(create_tbwall1_2575(4976, 2144), 2);
    add_background_object(create_tbwall1_2575(4976, 2240), 2);
    add_background_object(create_tbwall1_2575(4976, 2336), 2);
    add_background_object(create_tbwall1_2575(4976, 2432), 2);
    add_background_object(create_tbwall3_2573(6640, 2272), 2);
    add_background_object(create_tbwall1_2575(6736, 2176), 2);
    add_background_object(create_tbwall1_2575(6640, 2176), 2);
    add_background_object(create_tbwall3_2573(6832, 2272), 2);
    add_background_object(create_tbwall1_2575(6928, 2176), 2);
    add_background_object(create_tbwall1_2575(6832, 2176), 2);
    add_background_object(create_tbwalllight_2582(6624, 2272), 2);
    add_background_object(create_tbwall3_2573(7024, 2272), 2);
    add_background_object(create_tbwall1_2575(7120, 2176), 2);
    add_background_object(create_tbwall1_2575(7024, 2176), 2);
    add_background_object(create_tbwall3_2573(7216, 2272), 2);
    add_background_object(create_tbwall1_2575(7312, 2176), 2);
    add_background_object(create_tbwall1_2575(7216, 2176), 2);
    add_background_object(create_tbwalllight_2582(6824, 2272), 2);
    add_background_object(create_tbwalllight_2582(7000, 2272), 2);
    add_background_object(create_tbwalllight_2582(7176, 2272), 2);
    add_background_object(create_tbtunnelwall_2578(6224, 2240), 2);
    add_background_object(create_tbtunnelwall_2578(6352, 2240), 2);
    add_background_object(create_tbtunnelwall_2578(6224, 2304), 2);
    add_background_object(create_tbtunnelwall_2578(6352, 2304), 2);
    add_background_object(create_tbwall1_2575(5120, 2176), 2);
    add_background_object(create_tbwall3_2573(5120, 2272), 2);
    add_background_object(create_tbwall1_2575(5216, 2176), 2);
    add_background_object(create_tbwall1_2575(5312, 2176), 2);
    add_background_object(create_tbwall3_2573(5312, 2272), 2);
    add_background_object(create_tbwall1_2575(5408, 2176), 2);
    add_background_object(create_tbwalledge2_2594(5920, 2176), 2);
    add_background_object(create_tbwalledge1_2581(5504, 2176), 2);
    add_background_object(create_tbtunneltop1_2577(5672, 2176), 2);
    add_background_object(create_tbtunnelbottom1_2576(5672, 2304), 2);
    add_background_object(create_tbtunnelwall_2578(5592, 2240), 2);
    add_background_object(create_tbtunnelwall_2578(5720, 2240), 2);
    add_background_object(create_tbtunnelwall_2578(5848, 2240), 2);
    add_background_object(create_tbwall1_2575(3792, 2304), 2);
    add_background_object(create_tbhandlebar_2641(6400, 2560), 2);
    add_background_object(create_tbhandlebar_2641(6496, 2560), 2);
    add_background_object(create_tbhandlebar_2641(6592, 2560), 2);
    add_background_object(create_tbhandlebar_2641(6912, 3008), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(7360, -43), 2);
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
    add_object(create_metaldoorback_2604(24, 2192), 2);
    add_object(create_lockeddoorback_2605(1952, 2192), 2);
    add_object(create_lockeddoorterminal_2606(1768, 2240), 2);
    add_object(create_levelpistonplatformmask_2685(2016, 3200), 2);
    add_object(create_levelpistonplatformmask_2685(2336, 3200), 2);
    add_object(create_levelpistonplatformmask_2685(2208, 3200), 2);
    add_object(create_levelpistonplatformmask_2685(2528, 3200), 2);
    add_object(create_levelpistonplatformmask_2685(2720, 3136), 2);
    add_object(create_lockeddoorback_2605(6552, 2320), 2);
    add_object(create_lockeddoorterminal_2606(6496, 2368), 2);
    add_object(create_levelspinplaformsupport_2686(4016, 3252), 2);
    add_object(create_levelspinplaformsupport_2686(4016, 3228), 2);
    add_object(create_levelspinplaformsupport_2686(4016, 3204), 2);
    add_object(create_levelspinplaformsupport_2686(4016, 3180), 2);
    add_object(create_levelspinplatformmask_2687(4088, 3232), 2);
    add_object(create_levelspinplatformmask_2687(4088, 3200), 2);
    add_object(create_levelspinplatformmask_2687(4088, 3168), 2);
    add_object(create_levelspinplatformmask_2687(4088, 3136), 2);
    add_object(create_levelspinplaformsupport_2686(4224, 3252), 2);
    add_object(create_levelspinplaformsupport_2686(4224, 3228), 2);
    add_object(create_levelspinplaformsupport_2686(4224, 3204), 2);
    add_object(create_levelspinplaformsupport_2686(4224, 3180), 2);
    add_object(create_levelspinplatformmask_2687(4296, 3232), 2);
    add_object(create_levelspinplatformmask_2687(4296, 3200), 2);
    add_object(create_levelspinplatformmask_2687(4296, 3168), 2);
    add_object(create_levelspinplatformmask_2687(4296, 3136), 2);
    add_object(create_npcsyntaxeye_2609(480, 2136), 2);
    add_object(create_levelpistonplatformmask_2685(5952, 3328), 2);
    add_object(create_levelspinplaformsupport_2686(6760, 2868), 2);
    add_object(create_levelspinplaformsupport_2686(6760, 2844), 2);
    add_object(create_levelspinplaformsupport_2686(6760, 2820), 2);
    add_object(create_levelspinplaformsupport_2686(6760, 2796), 2);
    add_object(create_levelspinplatformmask_2687(6832, 2848), 2);
    add_object(create_levelspinplatformmask_2687(6832, 2816), 2);
    add_object(create_levelspinplatformmask_2687(6832, 2784), 2);
    add_object(create_levelspinplatformmask_2687(6832, 2752), 2);
    add_object(create_levelscrollingplatformmask1_2607(2824, 2432), 2);
    add_object(create_levelscrollingplatformmask1_2607(3112, 2432), 2);
    add_object(create_levelscrollingplatformmask1_2607(3400, 2432), 2);
    add_object(create_tbwalllightanim_2603(2048, 2144), 2);
    add_object(create_tbwalllightanim_2603(2160, 2144), 2);
    add_object(create_tbwalllightanim_2603(2272, 2144), 2);
    add_object(create_metaldoorback_2604(2400, 2192), 2);
    add_object(create_tbwalllightanim_2603(6624, 2272), 2);
    add_object(create_metaldoorback_2604(7320, 2320), 2);
    add_object(create_tbwalllightanim_2603(6824, 2272), 2);
    add_object(create_tbwalllightanim_2603(7000, 2272), 2);
    add_object(create_tbwalllightanim_2603(7176, 2272), 2);
    add_object(create_metaldoorback_2604(4328, 2192), 2);
    add_object(create_metaldoorback_2604(4632, 2192), 2);
    add_object(create_lockeddoorterminal_2606(6624, 2368), 2);
    add_object(create_lockeddoorback_2605(6680, 2320), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_tbwallshadow_2598(5040, 2432), 3);
    add_background_object(create_tbwallshadow_2598(5040, 2144), 3);
    add_background_object(create_tbwallshadow_2598(4288, 2048), 3);
    add_background_object(create_tbwallshadow_2598(2456, 2048), 3);
    add_background_object(create_tbwallshadow_2598(1824, 2336), 3);
    add_background_object(create_tbsolidblack_2688(6464, 2816), 3);
    add_background_object(create_tbsolidblack_2688(6720, 3200), 3);
    add_background_object(create_tbsolidblack_2688(6208, 2816), 3);
    add_background_object(create_tbsolidblack_2688(6336, 2816), 3);
    add_background_object(create_tblongrailing2_2689(4544, 3000), 3);
    add_background_object(create_tblongrailing3_2690(4664, 3000), 3);
    add_background_object(create_tbsolidblack_2688(5376, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4608, 2560), 3);
    add_background_object(create_tbsolidblack_2688(4736, 2560), 3);
    add_background_object(create_tbsolidblack_2688(4864, 2560), 3);
    add_background_object(create_tbsolidblack_2688(4992, 2560), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2560), 3);
    add_background_object(create_tbfloor18_2631(1528, 1984), 3);
    add_background_object(create_tbfloor19_2613(1536, 2040), 3);
    add_background_object(create_tbfloor21_2632(552, 2560), 3);
    add_background_object(create_tbfloor20_2615(600, 2560), 3);
    add_background_object(create_tbwall6_2611(2440, 2304), 3);
    add_background_object(create_tbwall6_2611(2376, 2304), 3);
    add_background_object(create_tbwall6_2611(2312, 2304), 3);
    add_background_object(create_tbwall6_2611(2248, 2304), 3);
    add_background_object(create_tblongrailing2_2689(3136, 2848), 3);
    add_background_object(create_tblongrailing3_2690(3336, 2848), 3);
    add_background_object(create_tblongrailing2_2689(2832, 2880), 3);
    add_background_object(create_tblongrailing3_2690(3032, 2880), 3);
    add_background_object(create_tbsolidblack_2688(2208, 3456), 3);
    add_background_object(create_tbswitchpadright_2691(6224, 3168), 3);
    add_background_object(create_tbswitchpadfloor_2692(6240, 3168), 3);
    add_background_object(create_tbswitchpadleft_2693(2408, 2464), 3);
    add_background_object(create_tbwall7_2638(4928, 2912), 3);
    add_background_object(create_tbfloor1_2614(0, 2240), 3);
    add_background_object(create_tbfloor2_2620(1600, 2080), 3);
    add_background_object(create_tbfloor21_2632(1792, 2240), 3);
    add_background_object(create_tbfloor16_2617(1560, 2080), 3);
    add_background_object(create_tbfloor2_2620(1920, 2080), 3);
    add_background_object(create_tbfloor16_2617(1856, 2080), 3);
    add_background_object(create_tbladder_2636(1824, 2240), 3);
    add_background_object(create_tbladder_2636(1824, 2272), 3);
    add_background_object(create_tbladder_2636(1824, 2304), 3);
    add_background_object(create_tbwall6_2611(1864, 2240), 3);
    add_background_object(create_tbwall6_2611(1928, 2240), 3);
    add_background_object(create_tbwall6_2611(1992, 2240), 3);
    add_background_object(create_tbwall9_2694(1760, 2368), 3);
    add_background_object(create_tbwall9_2694(1952, 2560), 3);
    add_background_object(create_tbsolidblack_2688(1568, 2560), 3);
    add_background_object(create_tbsolidblack_2688(1440, 2560), 3);
    add_background_object(create_tbwall10_2695(2144, 2624), 3);
    add_background_object(create_tbwall13_2696(1824, 2432), 3);
    add_background_object(create_tbwall11_2697(1952, 3392), 3);
    add_background_object(create_tbwall15_2698(1888, 3072), 3);
    add_background_object(create_tbwall10_2695(2144, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2208, 2560), 3);
    add_background_object(create_tbwall11_2697(2016, 3392), 3);
    add_background_object(create_tbwall11_2697(2080, 3392), 3);
    add_background_object(create_tbwall11_2697(2144, 3392), 3);
    add_background_object(create_tbwall13_2696(1888, 2432), 3);
    add_background_object(create_tbwall13_2696(1952, 2432), 3);
    add_background_object(create_tbwall12_2699(1760, 2496), 3);
    add_background_object(create_tbwall16_2700(1568, 3072), 3);
    add_background_object(create_tbsolidblack_2688(1824, 2560), 3);
    add_background_object(create_tbsolidblack_2688(1696, 2560), 3);
    add_background_object(create_tbwall15_2698(1824, 3072), 3);
    add_background_object(create_tbwall15_2698(1760, 3072), 3);
    add_background_object(create_tbwall15_2698(1696, 3072), 3);
    add_background_object(create_tbwall15_2698(1632, 3072), 3);
    add_background_object(create_tbwall11_2697(1824, 2496), 3);
    add_background_object(create_tbwall9_2694(1760, 2432), 3);
    add_background_object(create_tbwall9_2694(1568, 3136), 3);
    add_background_object(create_tbwall9_2694(1568, 3200), 3);
    add_background_object(create_tbwall9_2694(1952, 2624), 3);
    add_background_object(create_tbwall19_2701(1952, 3072), 3);
    add_background_object(create_tbwall22_2702(2144, 3072), 3);
    add_background_object(create_tbwall20_2703(1888, 3328), 3);
    add_background_object(create_tbwall11_2697(1888, 2496), 3);
    add_background_object(create_tbsolidblack_2688(1440, 3072), 3);
    add_background_object(create_tbsolidblack_2688(1440, 3200), 3);
    add_background_object(create_tbwall9_2694(1568, 3264), 3);
    add_background_object(create_tbwall12_2699(1568, 3328), 3);
    add_background_object(create_tbwall11_2697(1632, 3328), 3);
    add_background_object(create_tbwall11_2697(1696, 3328), 3);
    add_background_object(create_tbsolidblack_2688(1440, 3328), 3);
    add_background_object(create_tbsolidblack_2688(1568, 3392), 3);
    add_background_object(create_tbsolidblack_2688(1440, 3456), 3);
    add_background_object(create_tbsolidblack_2688(1696, 3392), 3);
    add_background_object(create_tbsolidblack_2688(1824, 3392), 3);
    add_background_object(create_tbwall12_2699(1888, 3392), 3);
    add_background_object(create_tbwall11_2697(1760, 3328), 3);
    add_background_object(create_tbwall11_2697(1824, 3328), 3);
    add_background_object(create_tbsolidblack_2688(1952, 3456), 3);
    add_background_object(create_tbsolidblack_2688(2080, 3456), 3);
    add_background_object(create_tbwall6_2611(2056, 2240), 3);
    add_background_object(create_tbwall6_2611(2120, 2240), 3);
    add_background_object(create_tbwall6_2611(2184, 2240), 3);
    add_background_object(create_tbwall20_2703(1952, 2496), 3);
    add_background_object(create_tbwall13_2696(1888, 3264), 3);
    add_background_object(create_tbwall13_2696(1824, 3264), 3);
    add_background_object(create_tbwall13_2696(1760, 3264), 3);
    add_background_object(create_tbwall13_2696(1696, 3264), 3);
    add_background_object(create_tbwall13_2696(1632, 3264), 3);
    add_background_object(create_tbladder_2636(1824, 2336), 3);
    add_background_object(create_tbwall11_2697(2208, 3392), 3);
    add_background_object(create_tbsolidblack_2688(2720, 3392), 3);
    add_background_object(create_tbwall11_2697(2464, 3392), 3);
    add_background_object(create_tbwall11_2697(2528, 3392), 3);
    add_background_object(create_tbwall11_2697(2592, 3392), 3);
    add_background_object(create_tbwall11_2697(2656, 3392), 3);
    add_background_object(create_tbwall21_2704(2720, 3328), 3);
    add_background_object(create_tbsolidblack_2688(2336, 3456), 3);
    add_background_object(create_tbwall17_2705(2720, 3392), 3);
    add_background_object(create_tbwall23_2706(2528, 2944), 3);
    add_background_object(create_tbwall11_2697(2272, 3392), 3);
    add_background_object(create_tbsolidblack_2688(2464, 3456), 3);
    add_background_object(create_tbsolidblack_2688(2592, 3456), 3);
    add_background_object(create_tbwall11_2697(2784, 3328), 3);
    add_background_object(create_tbwall11_2697(2336, 3392), 3);
    add_background_object(create_tbwall11_2697(2400, 3392), 3);
    add_background_object(create_tbwall15_2698(2272, 2944), 3);
    add_background_object(create_tbsolidblack_2688(2336, 2560), 3);
    add_background_object(create_tbwall15_2698(2336, 2944), 3);
    add_background_object(create_tbwall15_2698(2400, 2944), 3);
    add_background_object(create_tbsolidblack_2688(2464, 2560), 3);
    add_background_object(create_tbwall15_2698(2464, 2944), 3);
    add_background_object(create_tbsolidblack_2688(2848, 3392), 3);
    add_background_object(create_tbwall17_2705(2848, 3328), 3);
    add_background_object(create_tbwall10_2695(2848, 3264), 3);
    add_background_object(create_tbwall10_2695(2848, 3200), 3);
    add_background_object(create_tbsolidblack_2688(2912, 3264), 3);
    add_background_object(create_tbsolidblack_2688(2976, 3392), 3);
    add_background_object(create_tbwall21_2704(2848, 3136), 3);
    add_background_object(create_tbsolidblack_2688(3040, 3264), 3);
    add_background_object(create_tbwall19_2701(2592, 3072), 3);
    add_background_object(create_tbwall9_2694(1952, 2688), 3);
    add_background_object(create_tbsolidblack_2688(1568, 2688), 3);
    add_background_object(create_tbsolidblack_2688(1440, 2688), 3);
    add_background_object(create_tbsolidblack_2688(1824, 2688), 3);
    add_background_object(create_tbsolidblack_2688(1696, 2688), 3);
    add_background_object(create_tbwall9_2694(1952, 2752), 3);
    add_background_object(create_tbwall9_2694(1952, 2816), 3);
    add_background_object(create_tbsolidblack_2688(1568, 2816), 3);
    add_background_object(create_tbsolidblack_2688(1440, 2816), 3);
    add_background_object(create_tbsolidblack_2688(1824, 2816), 3);
    add_background_object(create_tbsolidblack_2688(1696, 2816), 3);
    add_background_object(create_tbwall9_2694(1952, 2880), 3);
    add_background_object(create_tbwall9_2694(1952, 2944), 3);
    add_background_object(create_tbsolidblack_2688(1568, 2944), 3);
    add_background_object(create_tbsolidblack_2688(1440, 2944), 3);
    add_background_object(create_tbsolidblack_2688(1824, 2944), 3);
    add_background_object(create_tbsolidblack_2688(1696, 2944), 3);
    add_background_object(create_tbwall9_2694(1952, 3008), 3);
    add_background_object(create_tbwall10_2695(2144, 2752), 3);
    add_background_object(create_tbwall10_2695(2144, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2208, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2336, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2464, 2688), 3);
    add_background_object(create_tbwall10_2695(2144, 2880), 3);
    add_background_object(create_tbwall10_2695(2144, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2208, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2336, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2464, 2816), 3);
    add_background_object(create_tbwall9_2694(2592, 2880), 3);
    add_background_object(create_tbwall10_2695(2144, 3008), 3);
    add_background_object(create_tbwall10_2695(2144, 2944), 3);
    add_background_object(create_tbwall9_2694(2592, 2944), 3);
    add_background_object(create_tbwall9_2694(2592, 3008), 3);
    add_background_object(create_tbsolidblack_2688(2592, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2592, 2688), 3);
    add_background_object(create_tbsolidblack_2688(2720, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2720, 2688), 3);
    add_background_object(create_tbwall15_2698(2656, 2816), 3);
    add_background_object(create_tbwall15_2698(2720, 2816), 3);
    add_background_object(create_tbwall16_2700(2592, 2816), 3);
    add_background_object(create_tbwall15_2698(2784, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2848, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2848, 2688), 3);
    add_background_object(create_tbwall15_2698(2848, 2816), 3);
    add_background_object(create_tbwall15_2698(2912, 2816), 3);
    add_background_object(create_tbsolidblack_2688(2976, 2560), 3);
    add_background_object(create_tbsolidblack_2688(2976, 2688), 3);
    add_background_object(create_tbwall15_2698(2976, 2816), 3);
    add_background_object(create_tbwall15_2698(3040, 2816), 3);
    add_background_object(create_tbsolidblack_2688(3104, 2688), 3);
    add_background_object(create_tbwall15_2698(3104, 2816), 3);
    add_background_object(create_tbwall15_2698(3168, 2816), 3);
    add_background_object(create_tblongrailing_2707(2840, 2928), 3);
    add_background_object(create_tblongrailing_2707(2904, 2928), 3);
    add_background_object(create_tblongrailing_2707(2968, 2928), 3);
    add_background_object(create_tbwall13_2696(2848, 3072), 3);
    add_background_object(create_tbwall13_2696(2912, 3072), 3);
    add_background_object(create_tbwall20_2703(2912, 3136), 3);
    add_background_object(create_tbwall12_2699(2912, 3200), 3);
    add_background_object(create_tbwall11_2697(2976, 3200), 3);
    add_background_object(create_tbwall11_2697(3040, 3200), 3);
    add_background_object(create_tbwall11_2697(3104, 3200), 3);
    add_background_object(create_tbwall7_2638(5088, 2912), 3);
    add_background_object(create_tbwall8_2610(2464, 3328), 3);
    add_background_object(create_tbwall13_2696(2464, 3264), 3);
    add_background_object(create_tbwall8_2610(2656, 3328), 3);
    add_background_object(create_tbwall13_2696(2656, 3264), 3);
    add_background_object(create_tbwall8_2610(2144, 3328), 3);
    add_background_object(create_tbwall8_2610(1952, 3328), 3);
    add_background_object(create_tbwall13_2696(1952, 3264), 3);
    add_background_object(create_tbwall13_2696(2144, 3264), 3);
    add_background_object(create_tblongrailing2_2689(3136, 2912), 3);
    add_background_object(create_tblongrailing3_2690(3336, 2912), 3);
    add_background_object(create_tblongrailing_2707(3144, 2960), 3);
    add_background_object(create_tblongrailing_2707(3208, 2960), 3);
    add_background_object(create_tblongrailing_2707(3272, 2960), 3);
    add_background_object(create_tbsolidblack_2688(3232, 2688), 3);
    add_background_object(create_tbwall15_2698(3232, 2816), 3);
    add_background_object(create_tbwall15_2698(3296, 2816), 3);
    add_background_object(create_tbsolidblack_2688(3360, 2688), 3);
    add_background_object(create_tbwall15_2698(3360, 2816), 3);
    add_background_object(create_tbwall15_2698(3424, 2816), 3);
    add_background_object(create_tbwall22_2702(2528, 3072), 3);
    add_background_object(create_tbwall19_2701(2208, 3072), 3);
    add_background_object(create_tbwall16_2700(2208, 2944), 3);
    add_background_object(create_tbwall10_2695(2528, 3008), 3);
    add_background_object(create_tbwall9_2694(2208, 3008), 3);
    add_background_object(create_tbwall13_2696(2976, 3136), 3);
    add_background_object(create_tbwall13_2696(3040, 3136), 3);
    add_background_object(create_tbwall13_2696(3104, 3136), 3);
    add_background_object(create_tbsolidblack_2688(3168, 3264), 3);
    add_background_object(create_tbwall11_2697(3168, 3200), 3);
    add_background_object(create_tbwall11_2697(3232, 3200), 3);
    add_background_object(create_tbwall13_2696(3168, 3136), 3);
    add_background_object(create_tbwall13_2696(3232, 3136), 3);
    add_background_object(create_tbsolidblack_2688(3296, 3264), 3);
    add_background_object(create_tbwall11_2697(3296, 3200), 3);
    add_background_object(create_tbwall13_2696(3296, 3136), 3);
    add_background_object(create_tbsolidblack_2688(3424, 3200), 3);
    add_background_object(create_tbwall17_2705(3360, 3200), 3);
    add_background_object(create_tbwall21_2704(3360, 3136), 3);
    add_background_object(create_tbwall13_2696(3360, 3072), 3);
    add_background_object(create_tbsolidblack_2688(3424, 3328), 3);
    add_background_object(create_tbwall11_2697(3424, 3136), 3);
    add_background_object(create_tbwall11_2697(3488, 3136), 3);
    add_background_object(create_tbwall13_2696(3424, 3072), 3);
    add_background_object(create_tbwall13_2696(3488, 3072), 3);
    add_background_object(create_tbsolidblack_2688(3488, 2688), 3);
    add_background_object(create_tbwall15_2698(3488, 2816), 3);
    add_background_object(create_tbwall15_2698(3552, 2816), 3);
    add_background_object(create_tbsolidblack_2688(3552, 3200), 3);
    add_background_object(create_tbsolidblack_2688(3552, 3328), 3);
    add_background_object(create_tbwall11_2697(3552, 3136), 3);
    add_background_object(create_tbwall13_2696(3552, 3072), 3);
    add_background_object(create_tbwall13_2696(3616, 3072), 3);
    add_background_object(create_tbsolidblack_2688(3488, 2560), 3);
    add_background_object(create_tbwall19_2701(3616, 2816), 3);
    add_background_object(create_tbwall9_2694(3616, 2624), 3);
    add_background_object(create_tbwall9_2694(3616, 2688), 3);
    add_background_object(create_tbwall9_2694(3616, 2752), 3);
    add_background_object(create_tbwall9_2694(3616, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3656, 3200), 3);
    add_background_object(create_tbsolidblack_2688(3776, 3200), 3);
    add_background_object(create_tbwall10_2695(3776, 2752), 3);
    add_background_object(create_tbwall10_2695(3776, 2688), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2688), 3);
    add_background_object(create_tbwall22_2702(3776, 2816), 3);
    add_background_object(create_tbwall10_2695(3776, 2624), 3);
    add_background_object(create_tbwall10_2695(3776, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2432), 3);
    add_background_object(create_tbsolidblack_2688(3840, 2304), 3);
    add_background_object(create_tbsolidblack_2688(3840, 3200), 3);
    add_background_object(create_tbwall13_2696(3712, 3136), 3);
    add_background_object(create_tbwall13_2696(3680, 3136), 3);
    add_background_object(create_tbwall21_2704(2144, 2496), 3);
    add_background_object(create_tbwall11_2697(2208, 2496), 3);
    add_background_object(create_tbwall11_2697(2272, 2496), 3);
    add_background_object(create_tbwall6_2611(2248, 2240), 3);
    add_background_object(create_tbwall6_2611(2312, 2240), 3);
    add_background_object(create_tbwall6_2611(2376, 2240), 3);
    add_background_object(create_tbwall11_2697(2336, 2496), 3);
    add_background_object(create_tbwall11_2697(2400, 2496), 3);
    add_background_object(create_tbwall6_2611(2440, 2240), 3);
    add_background_object(create_tbwall20_2703(1760, 2304), 3);
    add_background_object(create_tbwall21_2704(1696, 2304), 3);
    add_background_object(create_tbwall10_2695(1696, 2432), 3);
    add_background_object(create_tbwall10_2695(1696, 2368), 3);
    add_background_object(create_tbwall11_2697(1504, 2496), 3);
    add_background_object(create_tbwall11_2697(1568, 2496), 3);
    add_background_object(create_tbwall11_2697(1632, 2496), 3);
    add_background_object(create_tbwall17_2705(1696, 2496), 3);
    add_background_object(create_tbwall11_2697(1440, 2496), 3);
    add_background_object(create_tbwall6_2611(1568, 2432), 3);
    add_background_object(create_tbwall6_2611(1632, 2432), 3);
    add_background_object(create_tbwall6_2611(1632, 2368), 3);
    add_background_object(create_tbsolidblack_2688(1824, 3520), 3);
    add_background_object(create_tbsolidblack_2688(1696, 3520), 3);
    add_background_object(create_tbsolidblack_2688(1568, 3520), 3);
    add_background_object(create_tbsolidblack_2688(2720, 3520), 3);
    add_background_object(create_tbsolidblack_2688(2848, 3520), 3);
    add_background_object(create_tbsolidblack_2688(2976, 3520), 3);
    add_background_object(create_tbsolidblack_2688(2208, 3584), 3);
    add_background_object(create_tbsolidblack_2688(1952, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2080, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2336, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2464, 3584), 3);
    add_background_object(create_tbsolidblack_2688(2592, 3584), 3);
    add_background_object(create_tbsolidblack_2688(3040, 3392), 3);
    add_background_object(create_tbsolidblack_2688(3168, 3392), 3);
    add_background_object(create_tbsolidblack_2688(3296, 3392), 3);
    add_background_object(create_tbsolidblack_2688(3656, 3328), 3);
    add_background_object(create_tbsolidblack_2688(3776, 3328), 3);
    add_background_object(create_tbwall10_2695(3776, 2240), 3);
    add_background_object(create_tbwall12_2699(3840, 2240), 3);
    add_background_object(create_tbfloor2_2620(3528, 2000), 3);
    add_background_object(create_tbfloor21_2632(3744, 2256), 3);
    add_background_object(create_tbfloor1_2614(3400, 2256), 3);
    add_background_object(create_tbfloor1_2614(3144, 2256), 3);
    add_background_object(create_tbfloor2_2620(3208, 2000), 3);
    add_background_object(create_tbwall11_2697(2464, 2496), 3);
    add_background_object(create_tbwall11_2697(2528, 2496), 3);
    add_background_object(create_tbwall11_2697(2656, 2560), 3);
    add_background_object(create_tbwall11_2697(2720, 2560), 3);
    add_background_object(create_tbwall11_2697(2784, 2560), 3);
    add_background_object(create_tbwall11_2697(2848, 2560), 3);
    add_background_object(create_tbfloor1_2614(2888, 2256), 3);
    add_background_object(create_tbfloor2_2620(2888, 2000), 3);
    add_background_object(create_tbfloor2_2620(2568, 2000), 3);
    add_background_object(create_tbfloor16_2617(2824, 2000), 3);
    add_background_object(create_tbfloor16_2617(3144, 2000), 3);
    add_background_object(create_tbfloor16_2617(3464, 2000), 3);
    add_background_object(create_tbfloor16_2617(2512, 2000), 3);
    add_background_object(create_tbwall9_2694(3904, 3200), 3);
    add_background_object(create_tbsolidblack_2688(3904, 3392), 3);
    add_background_object(create_tbsolidblack_2688(4032, 3392), 3);
    add_background_object(create_tbwall12_2699(3904, 3328), 3);
    add_background_object(create_tbwall11_2697(3968, 3328), 3);
    add_background_object(create_tbwall11_2697(4032, 3328), 3);
    add_background_object(create_tbwall9_2694(3904, 3264), 3);
    add_background_object(create_tbsolidblack_2688(4160, 3392), 3);
    add_background_object(create_tbwall11_2697(4288, 3328), 3);
    add_background_object(create_tbsolidblack_2688(4288, 3392), 3);
    add_background_object(create_tbwall11_2697(4352, 3328), 3);
    add_background_object(create_tbsolidblack_2688(4416, 3392), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4672, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4608, 3392), 3);
    add_background_object(create_tbwall11_2697(4608, 3392), 3);
    add_background_object(create_tbwall11_2697(4672, 3392), 3);
    add_background_object(create_tbwall13_2696(4416, 3072), 3);
    add_background_object(create_tbwall13_2696(4608, 3328), 3);
    add_background_object(create_tbwall13_2696(4672, 3328), 3);
    add_background_object(create_tbwall6_2611(4160, 2944), 3);
    add_background_object(create_tbwall6_2611(4160, 3008), 3);
    add_background_object(create_tbwall6_2611(4160, 3072), 3);
    add_background_object(create_tbwall20_2703(4736, 3392), 3);
    add_background_object(create_tbwall12_2699(4736, 3456), 3);
    add_background_object(create_tbwall11_2697(4800, 3456), 3);
    add_background_object(create_tbwall11_2697(4864, 3456), 3);
    add_background_object(create_tbwall11_2697(4928, 3456), 3);
    add_background_object(create_tbsolidblack_2688(4736, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4864, 3520), 3);
    add_background_object(create_tbwall13_2696(4736, 3328), 3);
    add_background_object(create_tbwall8_2610(4800, 3136), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2688), 3);
    add_background_object(create_tbsolidblack_2688(4352, 2560), 3);
    add_background_object(create_tbwall15_2698(4352, 2816), 3);
    add_background_object(create_tbwall15_2698(4416, 2816), 3);
    add_background_object(create_tbwall15_2698(4864, 3072), 3);
    add_background_object(create_tbwall15_2698(4928, 3072), 3);
    add_background_object(create_tbwall22_2702(4288, 2816), 3);
    add_background_object(create_tbwall6_2611(4160, 2880), 3);
    add_background_object(create_tbwall10_2695(4288, 2752), 3);
    add_background_object(create_tbwall15_2698(4160, 2624), 3);
    add_background_object(create_tbwall15_2698(4224, 2624), 3);
    add_background_object(create_tbwall23_2706(4288, 2624), 3);
    add_background_object(create_tbwall10_2695(4288, 2688), 3);
    add_background_object(create_tbwall6_2611(4160, 2816), 3);
    add_background_object(create_tbwall6_2611(4160, 2752), 3);
    add_background_object(create_tbwall13_2696(4800, 3328), 3);
    add_background_object(create_tbwall13_2696(4864, 3328), 3);
    add_background_object(create_tbwall13_2696(4928, 3328), 3);
    add_background_object(create_tbfloor1_2614(1536, 2240), 3);
    add_background_object(create_tbwall8_2610(0, 2080), 3);
    add_background_object(create_tbwall6_2611(0, 2048), 3);
    add_background_object(create_tbfloor2_2620(0, 1984), 3);
    add_background_object(create_tbfloor1_2614(256, 2240), 3);
    add_background_object(create_tbfloor2_2620(256, 1984), 3);
    add_background_object(create_tbsyntaxpanel2_2612(400, 2056), 3);
    add_background_object(create_tbfloor21_2632(512, 2240), 3);
    add_background_object(create_tbfloor20_2615(640, 2240), 3);
    add_background_object(create_tbfloor19_2613(520, 2456), 3);
    add_background_object(create_tbfloor19_2613(640, 2456), 3);
    add_background_object(create_backdrop36_2601(544, 2240), 3);
    add_background_object(create_tbfloor19_2613(520, 2264), 3);
    add_background_object(create_tbfloor19_2613(640, 2264), 3);
    add_background_object(create_tbfloor20_2615(520, 2560), 3);
    add_background_object(create_tbfloor3_2634(560, 2560), 3);
    add_background_object(create_tbfloor21_2632(632, 2560), 3);
    add_background_object(create_tbfloor19_2613(640, 2520), 3);
    add_background_object(create_tbfloor19_2613(520, 2520), 3);
    add_background_object(create_tbfloor19_2613(520, 2328), 3);
    add_background_object(create_tbfloor19_2613(640, 2328), 3);
    add_background_object(create_tbfloor19_2613(640, 2392), 3);
    add_background_object(create_tbfloor19_2613(520, 2392), 3);
    add_background_object(create_tbfloor3_2634(672, 2240), 3);
    add_background_object(create_tbfloor2_2620(512, 1984), 3);
    add_background_object(create_tbfloor2_2620(768, 1984), 3);
    add_background_object(create_tbfloor1_2614(768, 2240), 3);
    add_background_object(create_tbwall6_2611(704, 2176), 3);
    add_background_object(create_tbwall6_2611(768, 2176), 3);
    add_background_object(create_tbwall6_2611(896, 2048), 3);
    add_background_object(create_tbwall6_2611(960, 2048), 3);
    add_background_object(create_tbfloor4_2621(1024, 2208), 3);
    add_background_object(create_tbfloor3_2634(720, 2240), 3);
    add_background_object(create_tbfloor6_2627(1024, 1960), 3);
    add_background_object(create_tbfloor5_2625(1152, 2176), 3);
    add_background_object(create_tbfloor7_2623(1152, 1928), 3);
    add_background_object(create_tbfloor12_2626(1280, 2176), 3);
    add_background_object(create_tbfloor15_2624(1280, 1928), 3);
    add_background_object(create_tbfloor13_2628(1408, 1960), 3);
    add_background_object(create_tbfloor10_2622(1408, 2208), 3);
    add_background_object(create_tbfloor17_2616(1536, 2080), 3);
    add_background_object(create_tbwall21_2704(1376, 2496), 3);
    add_background_object(create_tbwall10_2695(1376, 2624), 3);
    add_background_object(create_tbwall10_2695(1376, 2560), 3);
    add_background_object(create_tbwall10_2695(1376, 2752), 3);
    add_background_object(create_tbwall10_2695(1376, 2688), 3);
    add_background_object(create_tbwall10_2695(1376, 2880), 3);
    add_background_object(create_tbwall10_2695(1376, 2816), 3);
    add_background_object(create_tbwall10_2695(1376, 3008), 3);
    add_background_object(create_tbwall10_2695(1376, 2944), 3);
    add_background_object(create_tbwall10_2695(1376, 3136), 3);
    add_background_object(create_tbwall10_2695(1376, 3072), 3);
    add_background_object(create_tbwall10_2695(1376, 3264), 3);
    add_background_object(create_tbwall10_2695(1376, 3200), 3);
    add_background_object(create_tbwall10_2695(1376, 3392), 3);
    add_background_object(create_tbwall10_2695(1376, 3328), 3);
    add_background_object(create_tbwall10_2695(1376, 3520), 3);
    add_background_object(create_tbwall10_2695(1376, 3456), 3);
    add_background_object(create_tbsolidblack_2688(1440, 3584), 3);
    add_background_object(create_tbwall10_2695(1376, 3648), 3);
    add_background_object(create_tbwall10_2695(1376, 3584), 3);
    add_background_object(create_tbwall22_2702(1376, 3712), 3);
    add_background_object(create_tbwall15_2698(1440, 3712), 3);
    add_background_object(create_tbsolidblack_2688(1824, 3584), 3);
    add_background_object(create_tbsolidblack_2688(1696, 3584), 3);
    add_background_object(create_tbsolidblack_2688(1568, 3584), 3);
    add_background_object(create_tbwall15_2698(1504, 3712), 3);
    add_background_object(create_tbwall15_2698(1568, 3712), 3);
    add_background_object(create_tbwall15_2698(1632, 3712), 3);
    add_background_object(create_tbwall15_2698(1696, 3712), 3);
    add_background_object(create_tbwall15_2698(1760, 3712), 3);
    add_background_object(create_tbwall15_2698(1824, 3712), 3);
    add_background_object(create_tbwall15_2698(1888, 3712), 3);
    add_background_object(create_tbwall15_2698(1952, 3712), 3);
    add_background_object(create_tbwall15_2698(2016, 3712), 3);
    add_background_object(create_tbwall15_2698(2080, 3712), 3);
    add_background_object(create_tbwall15_2698(2144, 3712), 3);
    add_background_object(create_tbwall15_2698(2208, 3712), 3);
    add_background_object(create_tbwall15_2698(2272, 3712), 3);
    add_background_object(create_tbsolidblack_2688(4032, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4160, 3520), 3);
    add_background_object(create_tbsolidblack_2688(3904, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4288, 3520), 3);
    add_background_object(create_tbwall11_2697(4160, 3392), 3);
    add_background_object(create_tbwall20_2703(4096, 3328), 3);
    add_background_object(create_tbwall21_2704(4224, 3328), 3);
    add_background_object(create_tbwall17_2705(4224, 3392), 3);
    add_background_object(create_tbwall12_2699(4096, 3392), 3);
    add_background_object(create_tbwall13_2696(4160, 3328), 3);
    add_background_object(create_tbwall19_2701(4608, 2944), 3);
    add_background_object(create_tbwall9_2694(4608, 2880), 3);
    add_background_object(create_tbwall22_2702(4800, 3072), 3);
    add_background_object(create_tbwall9_2694(4608, 2816), 3);
    add_background_object(create_tbwall21_2704(4800, 2944), 3);
    add_background_object(create_tbsolidblack_2688(3104, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3232, 2560), 3);
    add_background_object(create_tbsolidblack_2688(3360, 2560), 3);
    add_background_object(create_tbwall20_2703(4864, 2944), 3);
    add_background_object(create_tbwall12_2699(4864, 3008), 3);
    add_background_object(create_tbwall10_2695(4800, 3008), 3);
    add_background_object(create_tbwall11_2697(4928, 3008), 3);
    add_background_object(create_tbwall15_2698(4992, 3072), 3);
    add_background_object(create_tbwall11_2697(4992, 3008), 3);
    add_background_object(create_tbwall15_2698(5056, 3072), 3);
    add_background_object(create_tbwall11_2697(5056, 3008), 3);
    add_background_object(create_tbwall15_2698(5120, 3072), 3);
    add_background_object(create_tbwall11_2697(5120, 3008), 3);
    add_background_object(create_tbwall15_2698(5184, 3072), 3);
    add_background_object(create_tbwall11_2697(5184, 3008), 3);
    add_background_object(create_tbwall13_2696(4992, 3328), 3);
    add_background_object(create_tbwall13_2696(5056, 3328), 3);
    add_background_object(create_tbwall11_2697(5056, 3456), 3);
    add_background_object(create_tbsolidblack_2688(4992, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4800, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4928, 3648), 3);
    add_background_object(create_tbsolidblack_2688(4416, 3520), 3);
    add_background_object(create_tbwall8_2610(4992, 3136), 3);
    add_background_object(create_tbwall8_2610(5184, 3136), 3);
    add_background_object(create_tbwall15_2698(5248, 3072), 3);
    add_background_object(create_tbwall15_2698(5312, 3072), 3);
    add_background_object(create_tbwall11_2697(5120, 3456), 3);
    add_background_object(create_tbsolidblack_2688(5120, 3520), 3);
    add_background_object(create_tbwall13_2696(5120, 3328), 3);
    add_background_object(create_tbwall13_2696(5184, 3328), 3);
    add_background_object(create_tbsolidblack_2688(5248, 3520), 3);
    add_background_object(create_tbsolidblack_2688(5056, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5184, 3648), 3);
    add_background_object(create_tbwall11_2697(4992, 3456), 3);
    add_background_object(create_tbwall11_2697(5184, 3456), 3);
    add_background_object(create_tbwall9_2694(4608, 2752), 3);
    add_background_object(create_tbwall9_2694(4608, 2688), 3);
    add_background_object(create_tbwall15_2698(4672, 2624), 3);
    add_background_object(create_tbwall15_2698(4736, 2624), 3);
    add_background_object(create_tbwall16_2700(4608, 2624), 3);
    add_background_object(create_tbwall11_2697(4672, 2496), 3);
    add_background_object(create_tbwall11_2697(4736, 2496), 3);
    add_background_object(create_tbwall15_2698(4800, 2624), 3);
    add_background_object(create_tbwall15_2698(4864, 2624), 3);
    add_background_object(create_tbwall11_2697(4800, 2496), 3);
    add_background_object(create_tbwall11_2697(4864, 2496), 3);
    add_background_object(create_tbwall15_2698(4928, 2624), 3);
    add_background_object(create_tbwall15_2698(4992, 2624), 3);
    add_background_object(create_tbwall11_2697(4928, 2496), 3);
    add_background_object(create_tbwall11_2697(4992, 2496), 3);
    add_background_object(create_tbwall15_2698(5056, 2624), 3);
    add_background_object(create_tbwall15_2698(5120, 2624), 3);
    add_background_object(create_tbwall15_2698(5184, 2624), 3);
    add_background_object(create_tbladder_2636(4760, 3136), 3);
    add_background_object(create_tbladder_2636(4760, 3168), 3);
    add_background_object(create_tbladder_2636(4760, 3072), 3);
    add_background_object(create_tbladder_2636(4760, 3104), 3);
    add_background_object(create_tbladder_2636(4760, 3008), 3);
    add_background_object(create_tbladder_2636(4760, 3040), 3);
    add_background_object(create_tbladder_2636(4760, 2944), 3);
    add_background_object(create_tbladder_2636(4760, 2976), 3);
    add_background_object(create_tbladder_2636(4760, 2880), 3);
    add_background_object(create_tbladder_2636(4760, 2912), 3);
    add_background_object(create_tbwall12_2699(5312, 3520), 3);
    add_background_object(create_tbwall17_2705(5248, 3456), 3);
    add_background_object(create_tbwall10_2695(5248, 3392), 3);
    add_background_object(create_tbwall9_2694(5312, 3456), 3);
    add_background_object(create_tbwall10_2695(5248, 3328), 3);
    add_background_object(create_tbwall9_2694(5312, 3328), 3);
    add_background_object(create_tbwall21_2704(5248, 3264), 3);
    add_background_object(create_tbwall20_2703(5312, 3264), 3);
    add_background_object(create_tbwall11_2697(5376, 3520), 3);
    add_background_object(create_tbwall20_2703(5440, 3520), 3);
    add_background_object(create_tbwall12_2699(5440, 3584), 3);
    add_background_object(create_tbwall11_2697(5568, 3584), 3);
    add_background_object(create_tbwall11_2697(5632, 3584), 3);
    add_background_object(create_tbwall11_2697(5504, 3584), 3);
    add_background_object(create_tbwall11_2697(5696, 3584), 3);
    add_background_object(create_tbsolidblack_2688(5312, 3648), 3);
    add_background_object(create_tbsolidblack_2688(5440, 3648), 3);
    add_background_object(create_tbwall13_2696(5376, 3456), 3);
    add_background_object(create_tbwall13_2696(5440, 3456), 3);
    add_background_object(create_tbsolidblack_2688(5568, 3648), 3);
    add_background_object(create_tbwall9_2694(5312, 3392), 3);
    add_background_object(create_tbwall13_2696(5504, 3456), 3);
    add_background_object(create_tbwall13_2696(5568, 3456), 3);
    add_background_object(create_tbwall13_2696(5632, 3456), 3);
    add_background_object(create_tbwall13_2696(5696, 3456), 3);
    add_background_object(create_tbsolidblack_2688(5696, 3648), 3);
    add_background_object(create_tbwall13_2696(5760, 3456), 3);
    add_background_object(create_tbwall8_2610(5504, 3264), 3);
    add_background_object(create_tbwall21_2704(5568, 3136), 3);
    add_background_object(create_tbwall22_2702(5568, 3200), 3);
    add_background_object(create_tbwall6_2611(5504, 3200), 3);
    add_background_object(create_tbwall19_2701(5376, 3072), 3);
    add_background_object(create_tbwall20_2703(5376, 3008), 3);
    add_background_object(create_tbwall12_2699(5312, 3008), 3);
    add_background_object(create_tbwall17_2705(5248, 3008), 3);
    add_background_object(create_tbwall10_2695(5248, 2944), 3);
    add_background_object(create_tbwall21_2704(5248, 2880), 3);
    add_background_object(create_tbwall20_2703(5312, 2880), 3);
    add_background_object(create_tbwall9_2694(5312, 2944), 3);
    add_background_object(create_tbwall15_2698(5632, 3200), 3);
    add_background_object(create_tbwall11_2697(5632, 3136), 3);
    add_background_object(create_tbwall15_2698(5696, 3200), 3);
    add_background_object(create_tbwall11_2697(5696, 3136), 3);
    add_background_object(create_tbwall19_2701(5760, 3200), 3);
    add_background_object(create_tbwall20_2703(5760, 3136), 3);
    add_background_object(create_tbwall8_2610(5568, 3264), 3);
    add_background_object(create_tbwall8_2610(5632, 3264), 3);
    add_background_object(create_tbwall8_2610(5696, 3264), 3);
    add_background_object(create_tbwall17_2705(5760, 3584), 3);
    add_background_object(create_tbwall21_2704(5760, 3520), 3);
    add_background_object(create_tbsolidblack_2688(5824, 3584), 3);
    add_background_object(create_tbwall11_2697(5824, 3520), 3);
    add_background_object(create_tbwall13_2696(5824, 3456), 3);
    add_background_object(create_tbwall13_2696(5888, 3456), 3);
    add_background_object(create_tbsolidblack_2688(5824, 3712), 3);
    add_background_object(create_tbwall6_2611(5760, 3264), 3);
    add_background_object(create_tbsolidblack_2688(5952, 3584), 3);
    add_background_object(create_tbsolidblack_2688(5952, 3712), 3);
    add_background_object(create_tbsolidblack_2688(6080, 3584), 3);
    add_background_object(create_tbsolidblack_2688(6080, 3712), 3);
    add_background_object(create_tbsolidblack_2688(6208, 3712), 3);
    add_background_object(create_tbsolidblack_2688(6656, 3648), 3);
    add_background_object(create_tbwall10_2695(6080, 3456), 3);
    add_background_object(create_tbwall10_2695(6080, 3392), 3);
    add_background_object(create_tbwall10_2695(6080, 3328), 3);
    add_background_object(create_tbwall10_2695(6080, 3264), 3);
    add_background_object(create_tbsolidblack_2688(6144, 3264), 3);
    add_background_object(create_tbsolidblack_2688(6272, 3264), 3);
    add_background_object(create_tbwall21_2704(6080, 3200), 3);
    add_background_object(create_tblongrailing2_2689(5848, 2976), 3);
    add_background_object(create_tblongrailing3_2690(6048, 2976), 3);
    add_background_object(create_tblongrailing_2707(5856, 3024), 3);
    add_background_object(create_tblongrailing_2707(5920, 3024), 3);
    add_background_object(create_tblongrailing_2707(5984, 3024), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3392), 3);
    add_background_object(create_tbsolidblack_2688(4480, 3520), 3);
    add_background_object(create_tbsolidblack_2688(4544, 3648), 3);
    add_background_object(create_tbwall6_2611(4416, 3136), 3);
    add_background_object(create_tbwall6_2611(4416, 3200), 3);
    add_background_object(create_tbwall6_2611(4416, 3264), 3);
    add_background_object(create_tbwall11_2697(4416, 3328), 3);
    add_background_object(create_tbwall11_2697(4480, 3328), 3);
    add_background_object(create_tbwall20_2703(4544, 3328), 3);
    add_background_object(create_tbwall12_2699(4544, 3392), 3);
    add_background_object(create_tbwall22_2702(4544, 2944), 3);
    add_background_object(create_tbwall10_2695(4544, 2880), 3);
    add_background_object(create_tbwall23_2706(4544, 2816), 3);
    add_background_object(create_tbwall15_2698(4480, 2816), 3);
    add_background_object(create_tbsolidblack_2688(4480, 2688), 3);
    add_background_object(create_tbsolidblack_2688(4480, 2560), 3);
    add_background_object(create_tbwall11_2697(4544, 2240), 3);
    add_background_object(create_tbwall20_2703(4608, 2240), 3);
    add_background_object(create_tblongrailing2_2689(4544, 3064), 3);
    add_background_object(create_tblongrailing3_2690(4664, 3064), 3);
    add_background_object(create_tblongrailing_2707(4552, 3112), 3);
    add_background_object(create_tblongrailing_2707(4600, 3112), 3);
    add_background_object(create_tbwall8_2610(4864, 2880), 3);
    add_background_object(create_tbwall6_2611(4800, 2880), 3);
    add_background_object(create_tbwall8_2610(4864, 2688), 3);
    add_background_object(create_tbwall22_2702(5696, 2816), 3);
    add_background_object(create_tbwall15_2698(5824, 2816), 3);
    add_background_object(create_tbwall15_2698(5888, 2816), 3);
    add_background_object(create_tblongrailing3_2690(6048, 2928), 3);
    add_background_object(create_tblongrailing2_2689(5848, 2928), 3);
    add_background_object(create_tblongrailing3_2690(6048, 2880), 3);
    add_background_object(create_tblongrailing2_2689(5848, 2880), 3);
    add_background_object(create_tbwall15_2698(5952, 2816), 3);
    add_background_object(create_tbwall15_2698(6016, 2816), 3);
    add_background_object(create_tbwall15_2698(5760, 2816), 3);
    add_background_object(create_tbwall10_2695(5696, 2752), 3);
    add_background_object(create_tbwall10_2695(5696, 2688), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2688), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2688), 3);
    add_background_object(create_tbwall9_2694(6016, 2688), 3);
    add_background_object(create_tbwall10_2695(5696, 2624), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2560), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2560), 3);
    add_background_object(create_tbwall9_2694(6016, 2624), 3);
    add_background_object(create_tbwall9_2694(6016, 2560), 3);
    add_background_object(create_tbwall11_2697(6144, 3200), 3);
    add_background_object(create_tbwall11_2697(6208, 3200), 3);
    add_background_object(create_tbwall11_2697(6272, 3200), 3);
    add_background_object(create_tbwall22_2702(6144, 2944), 3);
    add_background_object(create_tbwall23_2706(6144, 2880), 3);
    add_background_object(create_tbwall15_2698(6208, 2944), 3);
    add_background_object(create_tbwall15_2698(6272, 2944), 3);
    add_background_object(create_tbwall12_2699(6016, 2752), 3);
    add_background_object(create_tbwall11_2697(6080, 2752), 3);
    add_background_object(create_tbsolidblack_2688(6528, 3648), 3);
    add_background_object(create_tbwall11_2697(6528, 3584), 3);
    add_background_object(create_tbsolidblack_2688(6592, 3072), 3);
    add_background_object(create_tbwall20_2703(6720, 3648), 3);
    add_background_object(create_tbwall12_2699(6720, 3712), 3);
    add_background_object(create_tbwall13_2696(6720, 3584), 3);
    add_background_object(create_tbwall13_2696(6784, 3584), 3);
    add_background_object(create_tbwall11_2697(6784, 3712), 3);
    add_background_object(create_tbwall11_2697(6848, 3712), 3);
    add_background_object(create_tbwall20_2703(6656, 3584), 3);
    add_background_object(create_tbwall12_2699(6656, 3648), 3);
    add_background_object(create_tbwall13_2696(6848, 3584), 3);
    add_background_object(create_tbsolidblack_2688(6592, 3200), 3);
    add_background_object(create_tbwall15_2698(6720, 3328), 3);
    add_background_object(create_tbsolidblack_2688(6592, 3904), 3);
    add_background_object(create_tbsolidblack_2688(6592, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6720, 3904), 3);
    add_background_object(create_tbsolidblack_2688(6720, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6848, 3904), 3);
    add_background_object(create_tbsolidblack_2688(6848, 3776), 3);
    add_background_object(create_tbwall11_2697(6912, 3712), 3);
    add_background_object(create_tbwall13_2696(6912, 3584), 3);
    add_background_object(create_tbwall11_2697(6976, 3712), 3);
    add_background_object(create_tbwall13_2696(6976, 3584), 3);
    add_background_object(create_tbsolidblack_2688(6976, 3904), 3);
    add_background_object(create_tbsolidblack_2688(6976, 3776), 3);
    add_background_object(create_tbwall11_2697(7040, 3712), 3);
    add_background_object(create_tbwall13_2696(7040, 3584), 3);
    add_background_object(create_tbwall11_2697(7104, 3712), 3);
    add_background_object(create_tbwall13_2696(7104, 3584), 3);
    add_background_object(create_tbsolidblack_2688(7104, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7104, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7232, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7232, 3904), 3);
    add_background_object(create_tbwall17_2705(7168, 3712), 3);
    add_background_object(create_tbsolidblack_2688(7232, 3648), 3);
    add_background_object(create_tbsolidblack_2688(7232, 3520), 3);
    add_background_object(create_tbwall10_2695(7168, 3648), 3);
    add_background_object(create_tbwall10_2695(7168, 3584), 3);
    add_background_object(create_tbwall10_2695(7168, 3520), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3392), 3);
    add_background_object(create_tbwall10_2695(7296, 3392), 3);
    add_background_object(create_tbwall19_2701(6848, 3328), 3);
    add_background_object(create_tbwall20_2703(6784, 3136), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3904), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3648), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3520), 3);
    add_background_object(create_tbsolidblack_2688(7488, 3392), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3264), 3);
    add_background_object(create_tbwall10_2695(7296, 3328), 3);
    add_background_object(create_tbwall10_2695(7296, 3264), 3);
    add_background_object(create_tbsolidblack_2688(7488, 3264), 3);
    add_background_object(create_tbwall19_2701(5248, 2624), 3);
    add_background_object(create_tbwall16_2700(5248, 2560), 3);
    add_background_object(create_tbwall15_2698(5504, 2560), 3);
    add_background_object(create_tbwall15_2698(5568, 2560), 3);
    add_background_object(create_tbwall23_2706(5696, 2560), 3);
    add_background_object(create_tbwall15_2698(5632, 2560), 3);
    add_background_object(create_tbwall15_2698(5312, 2560), 3);
    add_background_object(create_tbwall15_2698(5376, 2560), 3);
    add_background_object(create_tbwall15_2698(5440, 2560), 3);
    add_background_object(create_tbsolidblack_2688(5120, 2432), 3);
    add_background_object(create_tbwall17_2705(5056, 2496), 3);
    add_background_object(create_tbwall10_2695(5056, 2432), 3);
    add_background_object(create_tbwall21_2704(5056, 2368), 3);
    add_background_object(create_tbwall11_2697(5184, 2368), 3);
    add_background_object(create_tbsolidblack_2688(5248, 2432), 3);
    add_background_object(create_tbwall11_2697(5248, 2368), 3);
    add_background_object(create_tbwall11_2697(5312, 2368), 3);
    add_background_object(create_tbsolidblack_2688(5376, 2432), 3);
    add_background_object(create_tbwall11_2697(5376, 2368), 3);
    add_background_object(create_tbwall11_2697(5440, 2368), 3);
    add_background_object(create_tbsolidblack_2688(5504, 2432), 3);
    add_background_object(create_tbwall11_2697(5504, 2368), 3);
    add_background_object(create_tbwall11_2697(5568, 2368), 3);
    add_background_object(create_tbsolidblack_2688(5632, 2432), 3);
    add_background_object(create_tbwall11_2697(5632, 2368), 3);
    add_background_object(create_tbwall11_2697(5696, 2368), 3);
    add_background_object(create_tbsolidblack_2688(5760, 2432), 3);
    add_background_object(create_tbwall11_2697(5760, 2368), 3);
    add_background_object(create_tbwall11_2697(5824, 2368), 3);
    add_background_object(create_tbsolidblack_2688(5888, 2432), 3);
    add_background_object(create_tbwall11_2697(5888, 2368), 3);
    add_background_object(create_tbwall11_2697(5952, 2368), 3);
    add_background_object(create_tbsolidblack_2688(6016, 2432), 3);
    add_background_object(create_tbwall11_2697(6016, 2368), 3);
    add_background_object(create_tbwall11_2697(6080, 2368), 3);
    add_background_object(create_tbwall9_2694(6144, 2432), 3);
    add_background_object(create_tbwall20_2703(6144, 2368), 3);
    add_background_object(create_tbsolidblack_2688(7488, 3776), 3);
    add_background_object(create_tbsolidblack_2688(7488, 3648), 3);
    add_background_object(create_tbsolidblack_2688(7488, 3520), 3);
    add_background_object(create_tbwall21_2704(7168, 3456), 3);
    add_background_object(create_tbwall11_2697(7232, 3456), 3);
    add_background_object(create_tbwall17_2705(7296, 3456), 3);
    add_background_object(create_tbwall8_2610(6976, 3008), 3);
    add_background_object(create_tbwall8_2610(7040, 3008), 3);
    add_background_object(create_tbwall15_2698(6976, 2944), 3);
    add_background_object(create_tbwall15_2698(7040, 2944), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3136), 3);
    add_background_object(create_tbwall10_2695(7296, 3200), 3);
    add_background_object(create_tbwall10_2695(7296, 3136), 3);
    add_background_object(create_tbsolidblack_2688(7488, 3136), 3);
    add_background_object(create_tbsolidblack_2688(7360, 3008), 3);
    add_background_object(create_tbwall10_2695(7296, 3072), 3);
    add_background_object(create_tbwall10_2695(7296, 3008), 3);
    add_background_object(create_tbsolidblack_2688(7488, 3008), 3);
    add_background_object(create_tbwall15_2698(7168, 2944), 3);
    add_background_object(create_tbwall15_2698(7232, 2944), 3);
    add_background_object(create_tbwall23_2706(7296, 2944), 3);
    add_background_object(create_tbwall15_2698(7104, 2944), 3);
    add_background_object(create_tbsolidblack_2688(7360, 2880), 3);
    add_background_object(create_tbsolidblack_2688(7488, 2880), 3);
    add_background_object(create_tbsolidblack_2688(7104, 2816), 3);
    add_background_object(create_tbsolidblack_2688(7232, 2816), 3);
    add_background_object(create_tbsolidblack_2688(6976, 2816), 3);
    add_background_object(create_tbwall9_2694(6784, 3200), 3);
    add_background_object(create_tbwall22_2702(6912, 2944), 3);
    add_background_object(create_tbwall10_2695(6912, 2880), 3);
    add_background_object(create_tbwall10_2695(6912, 2816), 3);
    add_background_object(create_tbwall15_2698(6784, 3328), 3);
    add_background_object(create_tbwall12_2699(6784, 3264), 3);
    add_background_object(create_tbwall20_2703(6848, 3264), 3);
    add_background_object(create_tbwall20_2703(6144, 2752), 3);
    add_background_object(create_tbwall12_2699(6144, 2816), 3);
    add_background_object(create_tbwall11_2697(6208, 2816), 3);
    add_background_object(create_tbwall11_2697(6272, 2816), 3);
    add_background_object(create_tbwall16_2700(6016, 2496), 3);
    add_background_object(create_tbwall15_2698(6080, 2496), 3);
    add_background_object(create_tbwall19_2701(6144, 2496), 3);
    add_background_object(create_tbsolidblack_2688(6976, 2688), 3);
    add_background_object(create_tbwall10_2695(6912, 2752), 3);
    add_background_object(create_tbwall10_2695(6912, 2688), 3);
    add_background_object(create_tbsolidblack_2688(6976, 2560), 3);
    add_background_object(create_tbwall10_2695(6912, 2624), 3);
    add_background_object(create_tbwall10_2695(6912, 2560), 3);
    add_background_object(create_tbsolidblack_2688(6976, 2432), 3);
    add_background_object(create_tbsolidblack_2688(6848, 2368), 3);
    add_background_object(create_tbfloor4_2621(2632, 2288), 3);
    add_background_object(create_tbfloor5_2625(2760, 2256), 3);
    add_background_object(create_tbfloor3_2634(2576, 2320), 3);
    add_background_object(create_tbfloor3_2634(2528, 2320), 3);
    add_background_object(create_tbwall11_2697(2912, 2560), 3);
    add_background_object(create_tbwall11_2697(2976, 2560), 3);
    add_background_object(create_tbwall11_2697(3040, 2560), 3);
    add_background_object(create_tbwall11_2697(3104, 2560), 3);
    add_background_object(create_tbwall11_2697(3168, 2560), 3);
    add_background_object(create_tbwall11_2697(3232, 2560), 3);
    add_background_object(create_tbwall11_2697(3296, 2560), 3);
    add_background_object(create_tbwall11_2697(3360, 2560), 3);
    add_background_object(create_tbwall11_2697(3424, 2560), 3);
    add_background_object(create_tbwall11_2697(3488, 2560), 3);
    add_background_object(create_tbwall20_2703(3616, 2496), 3);
    add_background_object(create_tbfloor3_2634(3640, 2256), 3);
    add_background_object(create_tbwall20_2703(3840, 2176), 3);
    add_background_object(create_tbwall21_2704(3776, 2176), 3);
    add_background_object(create_tbfloor2_2620(2176, 2080), 3);
    add_background_object(create_tbfloor16_2617(2464, 2000), 3);
    add_background_object(create_tbfloor18_2631(2424, 2080), 3);
    add_background_object(create_tbfloor19_2613(2432, 2056), 3);
    add_background_object(create_tbfloor17_2616(2432, 2000), 3);
    add_background_object(create_tbwall17_2705(3552, 2560), 3);
    add_background_object(create_tbwall21_2704(3552, 2496), 3);
    add_background_object(create_tbwall20_2703(2592, 2496), 3);
    add_background_object(create_tbwall12_2699(2592, 2560), 3);
    add_background_object(create_tbfloor3_2634(3688, 2256), 3);
    add_background_object(create_tbwall15_2698(6784, 2496), 3);
    add_background_object(create_tbwall15_2698(6848, 2496), 3);
    add_background_object(create_tbwall23_2706(6912, 2496), 3);
    add_background_object(create_tbsolidblack_2688(6720, 2368), 3);
    add_background_object(create_tbwall15_2698(6720, 2496), 3);
    add_background_object(create_tbwall15_2698(6656, 2496), 3);
    add_background_object(create_tbsolidblack_2688(6592, 2368), 3);
    add_background_object(create_tbwall15_2698(6592, 2496), 3);
    add_background_object(create_tbwall15_2698(6528, 2496), 3);
    add_background_object(create_tbwall15_2698(6336, 2944), 3);
    add_background_object(create_tbwall15_2698(6400, 2944), 3);
    add_background_object(create_tbwall15_2698(6464, 2944), 3);
    add_background_object(create_tbwall22_2702(6528, 3392), 3);
    add_background_object(create_tbwall10_2695(6528, 3264), 3);
    add_background_object(create_tbwall20_2703(6336, 3200), 3);
    add_background_object(create_tbwall9_2694(6336, 3264), 3);
    add_background_object(create_tbwall10_2695(6528, 3200), 3);
    add_background_object(create_tbwall10_2695(6528, 3136), 3);
    add_background_object(create_tbwall10_2695(6528, 3072), 3);
    add_background_object(create_tbwall10_2695(6528, 3008), 3);
    add_background_object(create_tbwall23_2706(6528, 2944), 3);
    add_background_object(create_tbwall11_2697(6336, 2816), 3);
    add_background_object(create_tbwall11_2697(6528, 2752), 3);
    add_background_object(create_tbwall20_2703(6592, 2752), 3);
    add_background_object(create_tbwall9_2694(6592, 2944), 3);
    add_background_object(create_tbwall12_2699(6592, 3008), 3);
    add_background_object(create_tbwall9_2694(6144, 3456), 3);
    add_background_object(create_tbwall9_2694(6144, 3392), 3);
    add_background_object(create_tbwall9_2694(6144, 3520), 3);
    add_background_object(create_tbwall11_2697(6464, 3584), 3);
    add_background_object(create_tbwall11_2697(6400, 3584), 3);
    add_background_object(create_tbsolidblack_2688(6336, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6400, 3648), 3);
    add_background_object(create_tbsolidblack_2688(6464, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6336, 3776), 3);
    add_background_object(create_tbsolidblack_2688(6208, 3840), 3);
    add_background_object(create_tbswitchpadright_2691(6608, 3552), 3);
    add_background_object(create_tbswitchpadfloor_2692(6624, 3552), 3);
    add_background_object(create_tbwall11_2697(6592, 3584), 3);
    add_background_object(create_tbwall20_2703(6656, 3008), 3);
    add_background_object(create_tbwall12_2699(6656, 3072), 3);
    add_background_object(create_tbwall20_2703(6720, 3072), 3);
    add_background_object(create_tbwall12_2699(6720, 3136), 3);
    add_background_object(create_tbwall15_2698(6656, 3328), 3);
    add_background_object(create_tbsolidblack_2688(6464, 3904), 3);
    add_background_object(create_tbwall15_2698(6464, 2496), 3);
    add_background_object(create_tbsolidblack_2688(6464, 2368), 3);
    add_background_object(create_tbwall11_2697(6464, 2752), 3);
    add_background_object(create_tbwall9_2694(6592, 2880), 3);
    add_background_object(create_tbsolidblack_2688(3776, 3456), 3);
    add_background_object(create_tbsolidblack_2688(3648, 3456), 3);
    add_background_object(create_tbwall11_2697(3616, 3136), 3);
    add_background_object(create_tbwall11_2697(3776, 3136), 3);
    add_background_object(create_tbwall16_2700(6144, 3328), 3);
    add_background_object(create_tbwall19_2701(6336, 3392), 3);
    add_background_object(create_tbwall15_2698(6208, 3328), 3);
    add_background_object(create_tbwall9_2694(6144, 3584), 3);
    add_background_object(create_tbwall21_2704(6272, 3584), 3);
    add_background_object(create_tbwall11_2697(6336, 3584), 3);
    add_background_object(create_tbsolidblack_2688(6080, 3840), 3);
    add_background_object(create_tbwall17_2705(6272, 3712), 3);
    add_background_object(create_tbwall11_2697(6208, 3712), 3);
    add_background_object(create_tbwall12_2699(6144, 3712), 3);
    add_background_object(create_tbwall9_2694(6144, 3648), 3);
    add_background_object(create_tbwall10_2695(6272, 3648), 3);
    add_background_object(create_tbwall13_2696(6208, 3584), 3);
    add_background_object(create_tbwall8_2610(6208, 3392), 3);
    add_background_object(create_tbwall9_2694(6336, 3328), 3);
    add_background_object(create_tbwall22_2702(6272, 3392), 3);
    add_background_object(create_tbwall10_2695(6528, 3328), 3);
    add_background_object(create_tbwall19_2701(6592, 3392), 3);
    add_background_object(create_tbwall16_2700(6592, 3328), 3);
    add_background_object(create_tbwall23_2706(6272, 3328), 3);
    add_background_object(create_tbfloor20_2615(2504, 2320), 3);
    add_background_object(create_tbswitchpadfloor_2692(2376, 2464), 3);
    add_background_object(create_tbwall17_2705(3840, 3136), 3);
    add_background_object(create_tbwall23_2706(3840, 2816), 3);
    add_background_object(create_tbwall10_2695(3840, 3008), 3);
    add_background_object(create_tbwall10_2695(3840, 2944), 3);
    add_background_object(create_tbwall10_2695(3840, 2880), 3);
    add_background_object(create_tbwall10_2695(3840, 3072), 3);
    add_background_object(create_tbwall9_2694(3904, 2880), 3);
    add_background_object(create_tbwall9_2694(3904, 2944), 3);
    add_background_object(create_tbwall9_2694(3904, 3008), 3);
    add_background_object(create_tbwall9_2694(3904, 3072), 3);
    add_background_object(create_tbwall9_2694(3904, 3136), 3);
    add_background_object(create_tbfloor2_2620(3784, 2000), 3);
    add_background_object(create_tbfloor2_2620(4040, 2000), 3);
    add_background_object(create_tbwall20_2703(3904, 2240), 3);
    add_background_object(create_tbwall9_2694(3904, 2368), 3);
    add_background_object(create_tbwall9_2694(3904, 2304), 3);
    add_background_object(create_tbwall9_2694(3904, 2624), 3);
    add_background_object(create_tbwall9_2694(3904, 2688), 3);
    add_background_object(create_tbwall9_2694(3904, 2752), 3);
    add_background_object(create_tbwall9_2694(3904, 2816), 3);
    add_background_object(create_tbwall9_2694(3904, 2496), 3);
    add_background_object(create_tbwall9_2694(3904, 2560), 3);
    add_background_object(create_tbwall9_2694(3904, 2432), 3);
    add_background_object(create_tbfloor17_2616(4304, 2080), 3);
    add_background_object(create_tbfloor19_2613(4304, 2056), 3);
    add_background_object(create_tbfloor18_2631(4296, 2000), 3);
    add_background_object(create_tbfloor2_2620(4336, 2080), 3);
    add_background_object(create_tbwall22_2702(4096, 2624), 3);
    add_background_object(create_tbwall6_2611(4096, 2240), 3);
    add_background_object(create_tbwall6_2611(4160, 2240), 3);
    add_background_object(create_tbwall6_2611(4224, 2240), 3);
    add_background_object(create_tbwall6_2611(4288, 2240), 3);
    add_background_object(create_tbwall6_2611(4352, 2240), 3);
    add_background_object(create_tbwall6_2611(4416, 2240), 3);
    add_background_object(create_tbwall21_2704(4480, 2240), 3);
    add_background_object(create_tbwall11_2697(4416, 2560), 3);
    add_background_object(create_tbwall17_2705(4480, 2560), 3);
    add_background_object(create_tbwall11_2697(4352, 2560), 3);
    add_background_object(create_tbwall11_2697(4288, 2560), 3);
    add_background_object(create_tbwall11_2697(4224, 2560), 3);
    add_background_object(create_tbwall11_2697(4160, 2560), 3);
    add_background_object(create_tbwall21_2704(4096, 2560), 3);
    add_background_object(create_tbwall6_2611(3968, 2400), 3);
    add_background_object(create_tbwall6_2611(4032, 2400), 3);
    add_background_object(create_tbwall6_2611(4096, 2400), 3);
    add_background_object(create_tbwall6_2611(4160, 2400), 3);
    add_background_object(create_tbwall6_2611(4224, 2400), 3);
    add_background_object(create_tbwall6_2611(4288, 2400), 3);
    add_background_object(create_tbwall15_2698(4544, 2304), 3);
    add_background_object(create_tbwall22_2702(4480, 2304), 3);
    add_background_object(create_tbwall19_2701(4608, 2304), 3);
    add_background_object(create_tbwall11_2697(4544, 2496), 3);
    add_background_object(create_tbwall11_2697(4608, 2496), 3);
    add_background_object(create_tbwall21_2704(4480, 2496), 3);
    add_background_object(create_tbswitchpadfloor_2692(4672, 2464), 3);
    add_background_object(create_tbswitchpadleft_2693(4704, 2464), 3);
    add_background_object(create_tbwall6_2611(3776, 3072), 3);
    add_background_object(create_tbwall6_2611(3776, 2880), 3);
    add_background_object(create_tbwall22_2702(6400, 2496), 3);
    add_background_object(create_tbwall10_2695(6400, 2432), 3);
    add_background_object(create_tbwall11_2697(6528, 2368), 3);
    add_background_object(create_tbwall21_2704(6400, 2368), 3);
    add_background_object(create_tbwall11_2697(6464, 2368), 3);
    add_background_object(create_tbwall11_2697(6656, 2368), 3);
    add_background_object(create_tbwall11_2697(6592, 2368), 3);
    add_background_object(create_tbwall11_2697(6784, 2368), 3);
    add_background_object(create_tbwall11_2697(6720, 2368), 3);
    add_background_object(create_tbwall11_2697(6848, 2368), 3);
    add_background_object(create_tbwall11_2697(6976, 2368), 3);
    add_background_object(create_tbwall11_2697(6912, 2368), 3);
    add_background_object(create_tbwall11_2697(7040, 2368), 3);
    add_background_object(create_tbwall11_2697(7168, 2368), 3);
    add_background_object(create_tbwall11_2697(7104, 2368), 3);
    add_background_object(create_tbwall11_2697(7232, 2368), 3);
    add_background_object(create_tbwall11_2697(7360, 2368), 3);
    add_background_object(create_tbwall11_2697(7296, 2368), 3);
    add_background_object(create_tbsolidblack_2688(7104, 2688), 3);
    add_background_object(create_tbsolidblack_2688(7232, 2688), 3);
    add_background_object(create_tbsolidblack_2688(7104, 2560), 3);
    add_background_object(create_tbsolidblack_2688(7232, 2560), 3);
    add_background_object(create_tbsolidblack_2688(7104, 2432), 3);
    add_background_object(create_tbsolidblack_2688(7232, 2432), 3);
    add_background_object(create_tbwall6_2611(6528, 2208), 3);
    add_background_object(create_tbwall6_2611(6592, 2208), 3);
    add_background_object(create_tbwall6_2611(6528, 2144), 3);
    add_background_object(create_tbfloor2_2620(6256, 2112), 3);
    add_background_object(create_tbfloor2_2620(5936, 2112), 3);
    add_background_object(create_tbfloor2_2620(4656, 2080), 3);
    add_background_object(create_tbfloor2_2620(4976, 2112), 3);
    add_background_object(create_tbfloor16_2617(4592, 2080), 3);
    add_background_object(create_tbfloor2_2620(5296, 2112), 3);
    add_background_object(create_tbfloor16_2617(5552, 2112), 3);
    add_background_object(create_tbfloor2_2620(5616, 2112), 3);
    add_background_object(create_tbfloor16_2617(5872, 2112), 3);
    add_background_object(create_tbfloor17_2616(4944, 2112), 3);
    add_background_object(create_tbfloor18_2631(4912, 2080), 3);
    add_background_object(create_tbfloor16_2617(5232, 2112), 3);
    add_background_object(create_tbfloor16_2617(6192, 2112), 3);
    add_background_object(create_tbfloor18_2631(6496, 2112), 3);
    add_background_object(create_tbwall6_2611(6528, 2080), 3);
    add_background_object(create_tbwall6_2611(6592, 2080), 3);
    add_background_object(create_tbwall6_2611(6656, 2208), 3);
    add_background_object(create_tbwall6_2611(6656, 2144), 3);
    add_background_object(create_tbwall6_2611(6656, 2080), 3);
    add_background_object(create_tbwall8_2610(6592, 2144), 3);
    add_background_object(create_tbfloor17_2616(6720, 2112), 3);
    add_background_object(create_tbfloor2_2620(6752, 2112), 3);
    add_background_object(create_tbwallshadow_2598(1520, 2048), 3);
    add_background_object(create_tbwallshadow_2598(64, 2048), 3);
    add_background_object(create_tbwallshadow_2598(64, 2144), 3);
    add_background_object(create_tbwallshadow_2598(1992, 2144), 3);
    add_background_object(create_tbwallshadow_2598(5040, 2240), 3);
    add_background_object(create_tbwallshadow_2598(5040, 2336), 3);
    add_background_object(create_tbwallshadow_2598(6720, 2272), 3);
    add_background_object(create_tbwallshadow_2598(6720, 2176), 3);
    add_background_object(create_tbwallshadow_2598(6592, 2272), 3);
    add_background_object(create_tbwallshadow_2598(6512, 2176), 3);
    add_background_object(create_tbfloor2_2620(7008, 2112), 3);
    add_background_object(create_tbwall6_2611(7296, 2080), 3);
    add_background_object(create_tbwall6_2611(7296, 2144), 3);
    add_background_object(create_tbwall6_2611(7296, 2208), 3);
    add_background_object(create_tbfloor18_2631(7264, 2112), 3);
    add_background_object(create_tbwallshadow_2598(7280, 2176), 3);
    add_background_object(create_tbladder_2636(4672, 2304), 3);
    add_background_object(create_tbladder_2636(4672, 2336), 3);
    add_background_object(create_tbladder_2636(4672, 2240), 3);
    add_background_object(create_tbladder_2636(4672, 2272), 3);
    add_background_object(create_tbwall11_2697(5120, 2368), 3);
    add_background_object(create_tbwall6_2611(5056, 2304), 3);
    add_background_object(create_tbwall6_2611(5056, 2240), 3);
    add_background_object(create_tbwall6_2611(5056, 2176), 3);
    add_background_object(create_tbwallshadow_2598(5120, 2272), 3);
    add_background_object(create_tbwallshadow_2598(5120, 2176), 3);
    add_background_object(create_tbwall22_2702(6080, 2880), 3);
    add_background_object(create_tbwall23_2706(6080, 2816), 3);
    add_background_object(create_tbwall17_2705(6400, 2816), 3);
    add_background_object(create_tbwall21_2704(6400, 2752), 3);
    add_background_object(create_tbwall9_2694(6592, 2816), 3);
    add_background_object(create_tbwall13_2696(6912, 3264), 3);
    add_background_object(create_tbwall17_2705(6080, 3584), 3);
    add_background_object(create_tbwall10_2695(6080, 3520), 3);
    add_background_object(create_tbwall11_2697(6016, 3584), 3);
    add_background_object(create_tbwall11_2697(5952, 3584), 3);
    add_background_object(create_tbwall20_2703(5888, 3520), 3);
    add_background_object(create_tbwall12_2699(5888, 3584), 3);
    add_background_object(create_tbwall13_2696(5952, 3520), 3);
    add_background_object(create_tbwall13_2696(6016, 3520), 3);
    add_background_object(create_tbwall10_2695(3840, 2368), 3);
    add_background_object(create_tbwall10_2695(3840, 2432), 3);
    add_background_object(create_tbwall22_2702(3776, 2304), 3);
    add_background_object(create_tbwall23_2706(3840, 2304), 3);
    add_background_object(create_tbwall17_2705(3840, 2496), 3);
    add_background_object(create_tbwall21_2704(3776, 2496), 3);
    add_background_object(create_tbwall6_2611(6912, 3328), 3);
    add_background_object(create_tbedgeoverlay_2640(1400, 2008), 3);
    add_background_object(create_tbedgeoverlay_2640(1096, 2008), 3);
    add_background_object(create_tbedgeoverlay_2640(1160, 1976), 3);
    add_background_object(create_tbedgeoverlay_2640(1336, 1976), 3);
    add_object(create_objectexplosiveblock_2708(4544, 2368), 3);
    add_object(create_objectexplosiveblock_2708(4544, 2432), 3);
    add_object(create_objectexplosiveblock_2708(4480, 2368), 3);
    add_object(create_objectexplosiveblock_2708(4480, 2432), 3);
    add_object(create_objectexplosiveblock_2708(2248, 2368), 3);
    add_object(create_minibossrailing2_1165(6544, 3440), 3);
    add_object(create_hazardspikesup_2669(2736, 2528), 3);
    add_object(create_hazardspikesup_2669(2768, 2528), 3);
    add_object(create_hazardspikesup_2669(2800, 2528), 3);
    add_object(create_hazardspikesup_2669(2832, 2528), 3);
    add_object(create_hazardspikesup_2669(2864, 2528), 3);
    add_object(create_hazardspikesup_2669(2896, 2528), 3);
    add_object(create_hazardspikesup_2669(2928, 2528), 3);
    add_object(create_hazardspikesup_2669(2960, 2528), 3);
    add_object(create_hazardspikesup_2669(2992, 2528), 3);
    add_object(create_hazardspikesup_2669(3024, 2528), 3);
    add_object(create_hazardspikesup_2669(3056, 2528), 3);
    add_object(create_hazardspikesup_2669(3088, 2528), 3);
    add_object(create_hazardspikesup_2669(3120, 2528), 3);
    add_object(create_hazardspikesup_2669(3152, 2528), 3);
    add_object(create_hazardspikesup_2669(3184, 2528), 3);
    add_object(create_hazardspikesup_2669(3216, 2528), 3);
    add_object(create_hazardspikesup_2669(3248, 2528), 3);
    add_object(create_hazardspikesup_2669(3280, 2528), 3);
    add_object(create_hazardspikesup_2669(3312, 2528), 3);
    add_object(create_hazardspikesup_2669(3344, 2528), 3);
    add_object(create_hazardspikesup_2669(3376, 2528), 3);
    add_object(create_hazardspikesup_2669(3408, 2528), 3);
    add_object(create_hazardspikesup_2669(3440, 2528), 3);
    add_object(create_hazardlavafallwarning_2709(4952, 2848), 3);
    add_object(create_enemyseeker3_2710(-264, 2172), 3);
    add_object(create_playerstartingpoint_358(141, 2221), 3);
    add_object(create_enemyseeker2_2711(-232, 2172), 3);
    add_object(create_active2_2712(-276, 2408), 3);
    add_object(create_enemyelitemask_2511(956, 2240), 3);
    add_object(create_enemyelite_2510(959, 2239), 3);
    add_object(create_active_2713(-276, 2216), 3);
    add_object(create_active_2713(-228, 2216), 3);
    add_object(create_switchbuttonright_2714(6224, 3168), 3);
    add_object(create_switchbuttonleft_2715(2408, 2464), 3);
    add_object(create_levelfireplatformflame1_2644(6252, 2551), 3);
    add_object(create_levelfireplatformflame2_2645(6356, 2551), 3);
    add_object(create_levelfireplatform1_2716(6304, 2552), 3);
    add_object(create_enemypushup_2656(3452, 3071), 3);
    add_object(create_enemypushuphitbox_2653(3453, 3001), 3);
    add_object(create_magmaflow_2661(4952, 2912), 3);
    add_object(create_lockeddoorbarrier_2667(1952, 2144), 3);
    add_object(create_airventplatform_2668(5120, 2280), 3);
    add_object(create_levelpistonplatform1_2717(2016, 3264), 3);
    add_object(create_laddertop_357(1844, 2263), 3);
    add_object(create_levelpistonplatform1_2717(2528, 3264), 3);
    add_object(create_levelpistonplatform1_2717(2336, 3264), 3);
    add_object(create_levelpistonplatform1_2717(2208, 3264), 3);
    add_object(create_levelpistonplatform1_2717(2720, 3200), 3);
    add_object(create_gimmickclothesline_1970(2904, 2936), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2824, 2944), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3032, 2944), 3);
    add_object(create_gimmickclothesline_1970(2976, 2936), 3);
    add_object(create_gimmickclothesline_1970(3024, 2936), 3);
    add_object(create_magmaflow_2661(5112, 2912), 3);
    add_object(create_hazardfireup_2226(2480, 3263), 3);
    add_object(create_hazardfireup_2226(2512, 3263), 3);
    add_object(create_hazardfireup_2226(2672, 3263), 3);
    add_object(create_hazardfireup_2226(2704, 3263), 3);
    add_object(create_hazardfireup_2226(2992, 3135), 3);
    add_object(create_hazardfireup_2226(3024, 3135), 3);
    add_object(create_hazardfireup_2226(1968, 3263), 3);
    add_object(create_hazardfireup_2226(2000, 3263), 3);
    add_object(create_hazardfireup_2226(2160, 3263), 3);
    add_object(create_hazardfireup_2226(2192, 3263), 3);
    add_object(create_hazardfireup_2226(2032, 3391), 3);
    add_object(create_hazardfireup_2226(2064, 3391), 3);
    add_object(create_hazardfireup_2226(2096, 3391), 3);
    add_object(create_hazardfireup_2226(2128, 3391), 3);
    add_object(create_hazardfireup_2226(2224, 3391), 3);
    add_object(create_hazardfireup_2226(2256, 3391), 3);
    add_object(create_hazardfireup_2226(2288, 3391), 3);
    add_object(create_hazardfireup_2226(2320, 3391), 3);
    add_object(create_hazardfireup_2226(2352, 3391), 3);
    add_object(create_hazardfireup_2226(2384, 3391), 3);
    add_object(create_hazardfireup_2226(2416, 3391), 3);
    add_object(create_hazardfireup_2226(2448, 3391), 3);
    add_object(create_hazardfireup_2226(2544, 3391), 3);
    add_object(create_hazardfireup_2226(2576, 3391), 3);
    add_object(create_hazardfireup_2226(2608, 3391), 3);
    add_object(create_hazardfireup_2226(2640, 3391), 3);
    add_object(create_hazardfireup_2226(2736, 3327), 3);
    add_object(create_hazardfireup_2226(2768, 3327), 3);
    add_object(create_hazardfireup_2226(2800, 3327), 3);
    add_object(create_hazardfireup_2226(2832, 3327), 3);
    add_object(create_gimmickclothesline_1970(3208, 2968), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3128, 2976), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3336, 2976), 3);
    add_object(create_gimmickclothesline_1970(3280, 2968), 3);
    add_object(create_gimmickclothesline_1970(3328, 2968), 3);
    add_object(create_objectpetal_302(2369, 3041), 3);
    add_object(create_objectpetal_302(2433, 3041), 3);
    add_object(create_objectpetal_302(2305, 3041), 3);
    add_object(create_objectpetal_302(2497, 3041), 3);
    add_object(create_objectpetal_302(2369, 3105), 3);
    add_object(create_objectpetal_302(2433, 3105), 3);
    add_object(create_objectpetal_302(2305, 3105), 3);
    add_object(create_objectpetal_302(2497, 3105), 3);
    add_object(create_hazardfireup_2226(3056, 3135), 3);
    add_object(create_hazardfireup_2226(3088, 3135), 3);
    add_object(create_hazardfireup_2226(3120, 3135), 3);
    add_object(create_hazardfireup_2226(3152, 3135), 3);
    add_object(create_hazardfireup_2226(3184, 3135), 3);
    add_object(create_hazardfireup_2226(3216, 3135), 3);
    add_object(create_hazardfireup_2226(3248, 3135), 3);
    add_object(create_hazardfireup_2226(3280, 3135), 3);
    add_object(create_hazardfireup_2226(3312, 3135), 3);
    add_object(create_hazardfireup_2226(3344, 3135), 3);
    add_object(create_enemypushup_2656(2916, 3071), 3);
    add_object(create_enemypushuphitbox_2653(2917, 3001), 3);
    add_object(create_lockeddoorbarrier_2667(6552, 2272), 3);
    add_object(create_levelspinplatform_2718(3968, 3312), 3);
    add_object(create_levelspinplatform_2718(3968, 3312), 3);
    add_object(create_levelspinplatform_2718(3968, 3312), 3);
    add_object(create_levelspinplatform_2718(3968, 3312), 3);
    add_object(create_levelspinplatform_2718(4416, 3312), 3);
    add_object(create_levelspinplatform_2718(4416, 3312), 3);
    add_object(create_levelspinplatform_2718(4416, 3312), 3);
    add_object(create_levelspinplatform_2718(4416, 3312), 3);
    add_object(create_objectcrystal_279(4245, 2778), 3);
    add_object(create_objectcrystal_279(4245, 2810), 3);
    add_object(create_objectcrystal_279(4245, 2842), 3);
    add_object(create_objectcrystal_279(4245, 2874), 3);
    add_object(create_objectcrystal_279(4245, 2906), 3);
    add_object(create_levellift_2647(592, 2464), 3);
    add_object(create_levelliftbottom_2651(560, 2464), 3);
    add_object(create_levellifttop_2650(560, 2240), 3);
    add_object(create_enemylimiter_350(1053, 2202), 3);
    add_object(create_enemyelitemask_2511(588, 2464), 3);
    add_object(create_enemyelite_2510(591, 2463), 3);
    add_object(create_enemyseeker_2648(1311, 2112), 3);
    add_object(create_enemypushup_2656(3588, 3071), 3);
    add_object(create_enemypushuphitbox_2653(3589, 3001), 3);
    add_object(create_enemylimiter_350(3461, 3042), 3);
    add_object(create_monitorcrate_409(1664, 3232), 3);
    add_object(create_monitorcrate_409(1696, 3232), 3);
    add_object(create_monitorrings_407(1728, 3232), 3);
    add_object(create_monitorcrate_409(1760, 3232), 3);
    add_object(create_monitorcrate_409(1792, 3232), 3);
    add_object(create_monitorwoodshield_325(1632, 3232), 3);
    add_object(create_hazardlavapit_2719(4960, 3392), 3);
    add_object(create_hazardlavafall_2720(4832, 3072), 3);
    add_object(create_hazardfireup_2226(4176, 3327), 3);
    add_object(create_hazardfireup_2226(4208, 3327), 3);
    add_object(create_objectexplosiveblock_2708(6400, 3136), 3);
    add_object(create_hazardlavapit_2719(5088, 3392), 3);
    add_object(create_hazardlavafallwarning_2709(4864, 3264), 3);
    add_object(create_hazardlavafallwarning_2709(4784, 3264), 3);
    add_object(create_hazardlavafall_2720(4832, 3072), 3);
    add_object(create_hazardlavafall_2720(4832, 3072), 3);
    add_object(create_hazardlavafall_2720(4832, 3072), 3);
    add_object(create_hazardlavapit_2719(5152, 3392), 3);
    add_object(create_hazardlavafallwarning_2709(5056, 3264), 3);
    add_object(create_hazardlavafallwarning_2709(4976, 3264), 3);
    add_object(create_hazardlavafallwarning_2709(5168, 3264), 3);
    add_object(create_hazardlavafall_2720(5024, 3072), 3);
    add_object(create_hazardlavafall_2720(5024, 3072), 3);
    add_object(create_hazardlavafall_2720(5024, 3072), 3);
    add_object(create_hazardlavafall_2720(5024, 3072), 3);
    add_object(create_hazardlavafall_2720(5216, 3072), 3);
    add_object(create_hazardlavafall_2720(5216, 3072), 3);
    add_object(create_hazardlavafall_2720(5216, 3072), 3);
    add_object(create_hazardlavafall_2720(5216, 3072), 3);
    add_object(create_enemyseeker_2648(5119, 3264), 3);
    add_object(create_laddertop_357(4780, 2903), 3);
    add_object(create_hazardlavafall_2720(5536, 3200), 3);
    add_object(create_hazardlavafallwarning_2709(5488, 3392), 3);
    add_object(create_hazardlavafallwarning_2709(5760, 3392), 3);
    add_object(create_hazardlavafall_2720(5536, 3200), 3);
    add_object(create_hazardlavafall_2720(5536, 3200), 3);
    add_object(create_hazardlavafall_2720(5536, 3200), 3);
    add_object(create_hazardlavafall_2720(5728, 3200), 3);
    add_object(create_hazardlavafall_2720(5728, 3200), 3);
    add_object(create_hazardlavafall_2720(5728, 3200), 3);
    add_object(create_hazardlavafall_2720(5728, 3200), 3);
    add_object(create_hazardlavafall_2720(5664, 3200), 3);
    add_object(create_hazardlavafall_2720(5664, 3200), 3);
    add_object(create_hazardlavafall_2720(5664, 3200), 3);
    add_object(create_hazardlavafall_2720(5664, 3200), 3);
    add_object(create_hazardlavafall_2720(5600, 3200), 3);
    add_object(create_hazardlavafall_2720(5600, 3200), 3);
    add_object(create_hazardlavafall_2720(5600, 3200), 3);
    add_object(create_hazardlavafall_2720(5600, 3200), 3);
    add_object(create_levelpistonplatform1_2717(5952, 3392), 3);
    add_object(create_gimmickclothesline_1970(5920, 3032), 3);
    add_object(create_gimmickhanginglongsensor2_1741(5840, 3040), 3);
    add_object(create_gimmickhanginglongsensor2_1741(6048, 3040), 3);
    add_object(create_gimmickclothesline_1970(5992, 3032), 3);
    add_object(create_gimmickclothesline_1970(6040, 3032), 3);
    add_object(create_gimmickclothesline_1970(4616, 3120), 3);
    add_object(create_gimmickhanginglongsensor2_1741(4536, 3128), 3);
    add_object(create_gimmickhanginglongsensor2_1741(4664, 3128), 3);
    add_object(create_gimmickclothesline_1970(4656, 3120), 3);
    add_object(create_hazardlavafall_2720(4896, 2624), 3);
    add_object(create_hazardlavafall_2720(4896, 2624), 3);
    add_object(create_hazardlavafall_2720(4896, 2624), 3);
    add_object(create_hazardlavafall_2720(4896, 2624), 3);
    add_object(create_hazardlavafallwarning_2709(4824, 2816), 3);
    add_object(create_enemypushup_2656(5756, 3135), 3);
    add_object(create_enemypushuphitbox_2653(5757, 3065), 3);
    add_object(create_objectcrystal_279(4581, 3154), 3);
    add_object(create_objectcrystal_279(4645, 3154), 3);
    add_object(create_objectcrystal_279(4613, 3154), 3);
    add_object(create_objectexplosiveblock_2708(6336, 3136), 3);
    add_object(create_objectexplosiveblock_2708(6272, 3136), 3);
    add_object(create_objectexplosiveblock_2708(6400, 3072), 3);
    add_object(create_objectexplosiveblock_2708(6336, 3072), 3);
    add_object(create_objectexplosiveblock_2708(6272, 3072), 3);
    add_object(create_objectexplosiveblock_2708(6400, 3008), 3);
    add_object(create_objectexplosiveblock_2708(6336, 3008), 3);
    add_object(create_objectexplosiveblock_2708(6272, 3008), 3);
    add_object(create_hazardlavapit_2719(4896, 2880), 3);
    add_object(create_hazardlavapit_2719(4896, 3392), 3);
    add_object(create_objectpetal_302(5953, 3065), 3);
    add_object(create_objectpetal_302(6009, 3065), 3);
    add_object(create_objectpetal_302(5897, 3065), 3);
    add_object(create_enemylavasquid_2721(4442, 3032), 3);
    add_object(create_enemylimiter_350(4229, 3034), 3);
    add_object(create_enemylimiter_350(4565, 3034), 3);
    add_object(create_enemylavasquid_2721(4994, 2816), 3);
    add_object(create_enemylimiter_350(4949, 2818), 3);
    add_object(create_enemylimiter_350(5717, 2818), 3);
    add_object(create_enemylavasquid_2721(1978, 2392), 3);
    add_object(create_enemylimiter_350(1829, 2394), 3);
    add_object(create_enemylimiter_350(2269, 2394), 3);
    add_object(create_enemylimiter_350(4461, 3034), 3);
    add_object(create_objectexplosiveblock_2708(6464, 3136), 3);
    add_object(create_objectexplosiveblock_2708(6464, 3072), 3);
    add_object(create_objectexplosiveblock_2708(6464, 3008), 3);
    add_object(create_yellowspringup_434(7136, 3568), 3);
    add_object(create_yellowspringupleft_432(7264, 3424), 3);
    add_object(create_hazardlavafall_2720(7008, 2944), 3);
    add_object(create_hazardlavafall_2720(7008, 2944), 3);
    add_object(create_hazardlavafall_2720(7008, 2944), 3);
    add_object(create_hazardlavafall_2720(7008, 2944), 3);
    add_object(create_hazardlavafallwarning_2709(6960, 3520), 3);
    add_object(create_hazardlavafallwarning_2709(7104, 3520), 3);
    add_object(create_hazardlavafall_2720(7072, 2944), 3);
    add_object(create_hazardlavafall_2720(7072, 2944), 3);
    add_object(create_hazardlavafall_2720(7072, 2944), 3);
    add_object(create_hazardlavafall_2720(7072, 2944), 3);
    add_object(create_yellowspringup_434(6848, 3248), 3);
    add_object(create_yellowspringup_434(6880, 3248), 3);
    add_object(create_hazardlavafallwarning_2709(7168, 3392), 3);
    add_object(create_levelspinplatform_2718(6920, 2800), 3);
    add_object(create_levelspinplatform_2718(6920, 2800), 3);
    add_object(create_levelspinplatform_2718(6920, 2800), 3);
    add_object(create_levelspinplatform_2718(6920, 2800), 3);
    add_object(create_levelscrollingplatformflame1_2654(2865, 2475), 3);
    add_object(create_levelscrollingplatform1_2662(2824, 2440), 3);
    add_object(create_levelscrollingplatformend_2664(2696, 2440), 3);
    add_object(create_levelscrollingplatformstart_2665(3512, 2440), 3);
    add_object(create_levelscrollingplatformflame1_2654(3153, 2475), 3);
    add_object(create_levelscrollingplatform1_2662(3112, 2440), 3);
    add_object(create_levelscrollingplatformflame1_2654(3441, 2475), 3);
    add_object(create_levelscrollingplatform1_2662(3400, 2440), 3);
    add_object(create_switchbuttonright_2714(6608, 3552), 3);
    add_object(create_objectexplosiveblock_2708(6720, 3520), 3);
    add_object(create_objectexplosiveblock_2708(6720, 3456), 3);
    add_object(create_objectexplosiveblock_2708(6720, 3392), 3);
    add_object(create_objectexplosiveblock_2708(6784, 3520), 3);
    add_object(create_objectexplosiveblock_2708(6784, 3456), 3);
    add_object(create_objectexplosiveblock_2708(6784, 3392), 3);
    add_object(create_objectexplosiveblock_2708(6656, 3520), 3);
    add_object(create_objectexplosiveblock_2708(6656, 3456), 3);
    add_object(create_objectexplosiveblock_2708(6656, 3392), 3);
    add_object(create_redspringup_440(3680, 3120), 3);
    add_object(create_redspringup_440(3712, 3120), 3);
    add_object(create_redspringup_440(3744, 3120), 3);
    add_object(create_objectcrystal_279(3725, 2506), 3);
    add_object(create_objectcrystal_279(3725, 2554), 3);
    add_object(create_objectcrystal_279(3725, 2602), 3);
    add_object(create_objectcrystal_279(3725, 2650), 3);
    add_object(create_objectcrystal_279(3725, 2698), 3);
    add_object(create_objectcrystal_279(3725, 2746), 3);
    add_object(create_objectcrystal_279(3725, 2794), 3);
    add_object(create_hazardlavafallwarning_2709(6272, 3520), 3);
    add_object(create_hazardlavafall_2720(6240, 3328), 3);
    add_object(create_hazardlavafall_2720(6240, 3328), 3);
    add_object(create_hazardlavafall_2720(6240, 3328), 3);
    add_object(create_hazardlavafall_2720(6240, 3328), 3);
    add_object(create_minibosstrapdoor_2722(6464, 3440), 3);
    add_object(create_minibossbarrier_924(6536, 3440), 3);
    add_object(create_minibossrailing2_1165(6544, 3488), 3);
    add_object(create_minibossbarrier_924(6536, 3488), 3);
    add_object(create_minibossrailing2_1165(6544, 3536), 3);
    add_object(create_minibossbarrier_924(6536, 3536), 3);
    add_object(create_enemylimiter_350(6277, 3530), 3);
    add_object(create_enemywallpusher_2723(6583, 3583), 3);
    add_object(create_objectkeycard_2643(5120, 2344), 3);
    add_object(create_objectexplosiveblock_2708(2248, 2432), 3);
    add_object(create_objectpetal_302(2673, 2537), 3);
    add_object(create_objectpetal_302(2705, 2537), 3);
    add_object(create_objectpetal_302(2689, 2505), 3);
    add_object(create_objectkeycard_2643(3816, 2472), 3);
    add_object(create_objectexplosiveblock_2708(2312, 2368), 3);
    add_object(create_objectexplosiveblock_2708(2312, 2432), 3);
    add_object(create_objectpetal_302(2233, 2473), 3);
    add_object(create_objectpetal_302(2185, 2473), 3);
    add_object(create_enemyseeker_2648(2975, 2392), 3);
    add_object(create_enemyseeker_2648(3271, 2392), 3);
    add_object(create_enemylavasquid_2721(4130, 2352), 3);
    add_object(create_enemylavasquid_2721(4434, 2512), 3);
    add_object(create_enemylimiter_350(4501, 2506), 3);
    add_object(create_enemylimiter_350(3973, 2506), 3);
    add_object(create_enemylimiter_350(3973, 2354), 3);
    add_object(create_enemylimiter_350(4493, 2354), 3);
    add_object(create_objectcrystal_279(4173, 2354), 3);
    add_object(create_objectcrystal_279(4205, 2354), 3);
    add_object(create_objectcrystal_279(4237, 2354), 3);
    add_object(create_objectcrystal_279(4269, 2354), 3);
    add_object(create_objectcrystal_279(4301, 2354), 3);
    add_object(create_objectcrystal_279(4269, 2514), 3);
    add_object(create_objectcrystal_279(4301, 2514), 3);
    add_object(create_objectcrystal_279(4333, 2514), 3);
    add_object(create_objectcrystal_279(4365, 2514), 3);
    add_object(create_objectcrystal_279(4397, 2514), 3);
    add_object(create_objectcrystal_279(4109, 2514), 3);
    add_object(create_objectcrystal_279(4141, 2514), 3);
    add_object(create_objectcrystal_279(4173, 2514), 3);
    add_object(create_objectcrystal_279(4205, 2514), 3);
    add_object(create_objectcrystal_279(4237, 2514), 3);
    add_object(create_objectcrystal_279(4333, 2354), 3);
    add_object(create_objectexplosiveblock_2708(4608, 2368), 3);
    add_object(create_objectexplosiveblock_2708(4608, 2432), 3);
    add_object(create_switchbuttonleft_2715(4704, 2464), 3);
    add_object(create_objectpetal_302(3793, 2481), 3);
    add_object(create_redspringleft_442(3760, 2224), 3);
    add_object(create_redspringleft_442(3760, 2192), 3);
    add_object(create_redspringupright_438(2504, 2288), 3);
    add_object(create_gimmickhangingidlesensor_740(6945, 3032), 3);
    add_object(create_monitorcrate_409(4992, 2320), 3);
    add_object(create_monitorcrate_409(4960, 2320), 3);
    add_object(create_monitorcrate_409(4928, 2320), 3);
    add_object(create_monitorcrate_409(4896, 2320), 3);
    add_object(create_monitorcrate_409(4864, 2320), 3);
    add_object(create_monitorcrate_409(4992, 2464), 3);
    add_object(create_monitorcrate_409(4960, 2464), 3);
    add_object(create_monitorcrate_409(4928, 2464), 3);
    add_object(create_monitorcrate_409(4896, 2464), 3);
    add_object(create_monitorcrate_409(4864, 2464), 3);
    add_object(create_laddertop_357(4692, 2263), 3);
    add_object(create_monitorcrate_409(5152, 2336), 3);
    add_object(create_monitorcrate_409(5184, 2336), 3);
    add_object(create_monitorcrate_409(5216, 2336), 3);
    add_object(create_monitorcrate_409(5248, 2336), 3);
    add_object(create_monitorkeystone_562(5152, 2248), 3);
    add_object(create_monitorkeystone_562(5184, 2248), 3);
    add_object(create_monitorkeystone_562(5216, 2248), 3);
    add_object(create_monitorkeystone_562(5248, 2248), 3);
    add_object(create_objectcodec_354(5042, 2333), 3);
    add_object(create_redspringupright_438(2536, 2288), 3);
    add_object(create_lockeddoorbarrier_2667(6680, 2272), 3);
    add_object(create_redspringupright_438(2568, 2288), 3);
    add_object(create_enemypushup_2656(6604, 2751), 3);
    add_object(create_enemypushuphitbox_2653(6605, 2681), 3);
    add_object(create_monitorkeystone_562(5120, 2248), 3);
    add_object(create_airventplatform_2668(5184, 2280), 3);
    add_object(create_airventplatform_2668(5248, 2280), 3);
    add_object(create_airventplatform_2668(4992, 2352), 3);
    add_object(create_airventplatform_2668(4928, 2352), 3);
    add_object(create_airventplatform_2668(4864, 2352), 3);
    add_object(create_monitorcrate_409(4992, 2392), 3);
    add_object(create_monitorcrate_409(4960, 2392), 3);
    add_object(create_monitorcrate_409(4928, 2392), 3);
    add_object(create_monitorcrate_409(4896, 2392), 3);
    add_object(create_monitorcrate_409(4864, 2392), 3);
    add_object(create_airventplatform_2668(4992, 2424), 3);
    add_object(create_airventplatform_2668(4928, 2424), 3);
    add_object(create_airventplatform_2668(4864, 2424), 3);
    add_object(create_monitorcrate_409(4992, 2248), 3);
    add_object(create_monitorcrate_409(4960, 2248), 3);
    add_object(create_monitorcrate_409(4928, 2248), 3);
    add_object(create_monitorcrate_409(4896, 2248), 3);
    add_object(create_monitorcrate_409(4864, 2248), 3);
    add_object(create_airventplatform_2668(4992, 2280), 3);
    add_object(create_airventplatform_2668(4928, 2280), 3);
    add_object(create_airventplatform_2668(4864, 2280), 3);
    add_object(create_airventplatform_2668(6960, 2264), 3);
    add_object(create_airventplatform_2668(7024, 2264), 3);
    add_object(create_monitorrings_407(7008, 2232), 3);
    add_object(create_objectcrystal_279(6741, 3050), 3);
    add_object(create_objectcrystal_279(6677, 2986), 3);
    add_object(create_gimmickhangingidlesensor_740(6625, 2584), 3);
    add_object(create_gimmickhangingidlesensor_740(6529, 2584), 3);
    add_object(create_gimmickhangingidlesensor_740(6433, 2584), 3);
    add_object(create_hazardfireup_2226(5968, 3519), 3);
    add_object(create_hazardfireup_2226(6000, 3519), 3);
    add_object(create_hazardfireup_2226(6032, 3519), 3);
    add_object(create_hazardfireup_2226(6064, 3519), 3);
    add_object(create_monitorfireshield_328(6128, 2720), 3);
    add_object(create_objectcrystal_279(6165, 2346), 3);
    add_object(create_objectcrystal_279(6125, 2346), 3);
    add_object(create_objectcrystal_279(6085, 2346), 3);
    add_object(create_objectcrystal_279(6045, 2346), 3);
    add_object(create_objectcrystal_279(6005, 2346), 3);
    add_object(create_objectcrystal_279(5965, 2346), 3);
    add_object(create_objectkeycard_2643(5120, 2232), 3);
    add_object(create_enemyseeker_2648(5695, 2264), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_tbwall8_2610(4800, 3136), 4);
    add_background_object(create_tbwall11_2697(4800, 3456), 4);
    add_background_object(create_tbwall22_2702(4800, 3072), 4);
    add_background_object(create_tbwall15_2698(4992, 3072), 4);
    add_background_object(create_tbwall15_2698(5184, 3072), 4);
    add_background_object(create_tbwall8_2610(4992, 3136), 4);
    add_background_object(create_tbwall8_2610(5184, 3136), 4);
    add_background_object(create_tbwall11_2697(4992, 3456), 4);
    add_background_object(create_tbwall11_2697(5184, 3456), 4);
    add_background_object(create_tbwall11_2697(5504, 3584), 4);
    add_background_object(create_tbwall8_2610(5504, 3264), 4);
    add_background_object(create_tbwall6_2611(5504, 3200), 4);
    add_background_object(create_tbwall22_2702(5568, 3200), 4);
    add_background_object(create_tbwall15_2698(5632, 3200), 4);
    add_background_object(create_tbwall15_2698(5696, 3200), 4);
    add_background_object(create_tbwall8_2610(5568, 3264), 4);
    add_background_object(create_tbwall8_2610(5632, 3264), 4);
    add_background_object(create_tbwall8_2610(5696, 3264), 4);
    add_background_object(create_tbwall11_2697(5568, 3584), 4);
    add_background_object(create_tbwall11_2697(5632, 3584), 4);
    add_background_object(create_tbwall11_2697(5696, 3584), 4);
    add_background_object(create_tbwall15_2698(4864, 2624), 4);
    add_background_object(create_tbwall8_2610(4864, 2688), 4);
    add_background_object(create_tbwall8_2610(4864, 2880), 4);
    add_background_object(create_tbwall10_2695(4800, 3008), 4);
    add_background_object(create_tbwall20_2703(4864, 2944), 4);
    add_background_object(create_tbwall8_2610(6976, 3008), 4);
    add_background_object(create_tbwall8_2610(7040, 3008), 4);
    add_background_object(create_tbwall15_2698(6976, 2944), 4);
    add_background_object(create_tbwall15_2698(7040, 2944), 4);
    add_background_object(create_tbwall11_2697(6976, 3712), 4);
    add_background_object(create_tbwall11_2697(7040, 3712), 4);
    add_background_object(create_tbwall8_2610(6208, 3392), 4);
    add_background_object(create_tbwall15_2698(6208, 3328), 4);
    add_background_object(create_tbwall11_2697(6208, 3712), 4);
    add_background_object(create_tbwall22_2702(6528, 3392), 4);
    add_background_object(create_tbwall19_2701(6336, 3392), 4);
    add_background_object(create_tbwall22_2702(6272, 3392), 4);
    add_background_object(create_tbwall19_2701(6592, 3392), 4);
    add_object(create_metaldoorfront_2670(24, 2192), 4);
    add_object(create_lockeddoorfront_2671(1952, 2192), 4);
    add_object(create_lockeddoorseal_2672(1956, 2200), 4);
    add_object(create_lockeddoorfront_2671(6552, 2320), 4);
    add_object(create_lockeddoorseal_2672(6556, 2328), 4);
    add_object(create_hazardlavapit_2719(4832, 3392), 4);
    add_object(create_hazardlavapit_2719(5024, 3392), 4);
    add_object(create_hazardlavapit_2719(5216, 3392), 4);
    add_object(create_hazardlavapit_2719(5536, 3520), 4);
    add_object(create_hazardlavapit_2719(5600, 3520), 4);
    add_object(create_hazardlavapit_2719(5664, 3520), 4);
    add_object(create_hazardlavapit_2719(5728, 3520), 4);
    add_object(create_hazardlavapit_2719(7008, 3648), 4);
    add_object(create_hazardlavapit_2719(7072, 3648), 4);
    add_object(create_hazardlavapit_2719(6816, 3648), 4);
    add_object(create_hazardlavapit_2719(6880, 3648), 4);
    add_object(create_hazardlavapit_2719(6944, 3648), 4);
    add_object(create_hazardlavapit_2719(7136, 3648), 4);
    add_object(create_hazardlavapit_2719(6240, 3648), 4);
    add_object(create_metaldoorfront_2670(2400, 2192), 4);
    add_object(create_metaldoorfront_2670(7320, 2320), 4);
    add_object(create_metaldoorfront_2670(4328, 2192), 4);
    add_object(create_metaldoorfront_2670(4632, 2192), 4);
    add_object(create_lockeddoorfront_2671(6680, 2320), 4);
    add_object(create_lockeddoorseal_2672(6684, 2328), 4);
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
    add_object(create_cameralimitbossbottom_420(6496, 3647), 5);
    add_object(create_cameralimitbossleft_421(6144, 3480), 5);
    add_object(create_cameralimitbossright_422(6783, 3504), 5);
    add_object(create_cameralimitbosstop_423(6456, 3208), 5);
    add_object(create_cameratriggerboss_424(6464, 280), 5);
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
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_45, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_45, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_45, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_45, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_45, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_45, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_45, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_45, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_45, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_45, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_45, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_45, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_45, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_45, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_45, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_45, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_45, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_45, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_45, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_45, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_45, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_45, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_45, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_45, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_45, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_45, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_45, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_45, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_45, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_45, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_45, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_45, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_45, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_45, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_45, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_45, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_45, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_45, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_45, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_45, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_45, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_45, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_45, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_45, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_45, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
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
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1550_16 = loop_count;
    not_always_1677_44 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1420_45 = loop_count;
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
    not_always_1482_16 = loop_count;
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
    not_always_173_8 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1448_45 = loop_count;
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
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_1724_45 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    once_condition_1762_45 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_1421_45 = loop_count;
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
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
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
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    not_always_1678_44 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
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
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    not_always_1695_16 = loop_count;
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
    not_always_99_0 = loop_count;
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
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1634_44 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_11074()
{
    // event 2153_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2153_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 0);
        }
    }
    event_2153_46_end: ;
}
void Frames::loop_process_call_unlock_music_46()
{
    event_func_11074();
}
void Frames::loop_spawndebris_46()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_10728();
    event_func_10945();
}
void Frames::event_func_11075()
{
    // event 2151_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2151_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, media.get_channel_volume(-1 +32)/math_helper/(string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(2))/math_helper/(1000/math_helper/60.0)));
            ((Active*)*it)->alterables->values.set(9, media.get_channel_volume(-1 +32));
            ((Active*)*it)->alterables->values.set(10, 1);
        }
    }
    event_2151_46_end: ;
}
void Frames::loop_process_call_fadeout_music_46()
{
    event_func_11075();
}
void Frames::event_func_11076()
{
    // event 1621_46
    {
        if (!(group_main_engine_1)) goto event_1621_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_on(6))) goto event_1621_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(1)) < (6))) goto event_1621_46_end;
        FrameObject * single_instance_1621_46_0; single_instance_1621_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(enemypushup_2656_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypushupdebris_2569(parent->x + -20, parent->y + -5), parent->layer);
                if (single_instance_1621_46_0 == NULL)
                    single_instance_1621_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1621_46_0))->force_frame(((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1621_46_0))->set_y(((Active*)single_instance_1621_46_0)->get_y()-((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(1)*12);
    }
    event_1621_46_end: ;
}
void Frames::event_func_11077()
{
    // event 1622_46
    {
        if (!(group_main_engine_1)) goto event_1622_46_end;
        if (!(((Active*)get_instance(enemypushup_2656_instances))->alterables->flags.is_on(6))) goto event_1622_46_end;
        if (!((((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(1)) < (6))) goto event_1622_46_end;
        FrameObject * single_instance_1622_46_0; single_instance_1622_46_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(enemypushup_2656_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemypushupdebris_2569(parent->x + 20, parent->y + -5), parent->layer);
                if (single_instance_1622_46_0 == NULL)
                    single_instance_1622_46_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1622_46_0))->force_frame(((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1622_46_0))->set_y(((Active*)single_instance_1622_46_0)->get_y()-((Active*)get_instance(enemypushup_2656_instances))->alterables->values.get(1)*12);
        ((Active*)get_instance(enemypushup_2656_instances))->alterables->values.add(1, 1);
    }
    event_1622_46_end: ;
}
void Frames::loop_p_debris_46()
{
    event_func_11076();
    event_func_11077();
}
void Frames::event_func_11078()
{
    // event 2150_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2150_46_end;
        media.set_channel_volume(32-1, 0);
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, 0);
        }
    }
    event_2150_46_end: ;
}
void Frames::loop_process_call_fadein_music_46()
{
    event_func_11078();
}
void Frames::event_func_11079()
{
    // event 2152_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2152_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(11, 1);
        }
    }
    event_2152_46_end: ;
}
void Frames::loop_process_call_lock_music_46()
{
    event_func_11079();
}
void Frames::event_func_11080()
{
    // event 2149_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2149_46_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
    }
    event_2149_46_end: ;
}
void Frames::loop_process_call_unqueue_music_46()
{
    event_func_11080();
}
void Frames::event_func_11081()
{
    // event 2116_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2116_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_invincibility_ogg_46, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2116_46_end: ;
}
void Frames::loop_play_music_0_46()
{
    event_func_11081();
}
void Frames::event_func_11082()
{
    // event 2117_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2117_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_speedup_ogg_47, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2117_46_end: ;
}
void Frames::loop_play_music_1_46()
{
    event_func_11082();
}
void Frames::event_func_11083()
{
    // event 2118_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2118_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_1up_ogg_48, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2118_46_end: ;
}
void Frames::loop_play_music_2_46()
{
    event_func_11083();
}
void Frames::event_func_11084()
{
    // event 2119_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2119_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_clear_ogg_49, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2119_46_end: ;
}
void Frames::loop_play_music_3_46()
{
    event_func_11084();
}
void Frames::event_func_11085()
{
    // event 2120_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2120_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_midboss_ogg_50, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2120_46_end: ;
}
void Frames::loop_play_music_4_46()
{
    event_func_11085();
}
void Frames::event_func_11086()
{
    // event 2121_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2121_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage6_ogg_196, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2121_46_end: ;
}
void Frames::loop_play_music_5_46()
{
    event_func_11086();
}
void Frames::event_func_11087()
{
    // event 2124_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2124_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_gameover_ogg_53, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2124_46_end: ;
}
void Frames::loop_play_music_8_46()
{
    event_func_11087();
}
void Frames::event_func_11088()
{
    // event 2131_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2131_46_end;
        stringparser_427_instances.clear_selection();
        for (ObjectIterator it(stringparser_427_instances); !it.end(); ++it) {
            ((StringParser*)*it)->set(((ArrayObject*)get_instance(functionmusic_231_instances, it.current_index))->get_string(((ArrayObject*)get_instance(functionmusic_231_instances, it.current_index))->data.x_pos));
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_process_call_54+((StringParser*)get_single(stringparser_427_instances))->get_element(1));
            if (dyn_it == (*loops).end()) goto dynamic_2131_46_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_2131_46_0_end: ;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2131_46_end: ;
}
void Frames::loop_process_call_me_46()
{
    event_func_11088();
}
void Frames::event_func_11089()
{
    // event 2138_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2138_46_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(controllermusic_128_instances, default_active_instance))->alterables->values.get(7)*(global_values->get(25)*0.01));
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 0);
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_play_music_56+number_to_string(((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos-1, 0)));
            if (dyn_it == (*loops).end()) goto dynamic_2138_46_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_2138_46_0_end: ;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos-1, 0));
        }
        media.set_channel_position(32-1, ((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos-1, 1));
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos-1, 2));
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((ArrayObject*)*it)->data.x_pos-1;
        }
    }
    event_2138_46_end: ;
}
void Frames::loop_process_call_resume_music_46()
{
    event_func_11089();
}
void Frames::event_func_11090()
{
    // event 1907_46
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_1 && group_main_engine_level_specific_methods_bosses_boss_syntax_spider_lava_wall_1)) goto event_1907_46_end;
        effectwarning_1065_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectwarning_1513(0, 3856), 5);
            effectwarning_1065_instances.add_back();
        }
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+loop_warning_index*32);
        }
    }
    event_1907_46_end: ;
}
void Frames::loop_warning_46()
{
    event_func_11090();
}
void Frames::event_func_11091()
{
    // event 2147_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2147_46_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(((ArrayObject*)*it)->get_value(((ArrayObject*)*it)->data.x_pos+1, 0), ((ArrayObject*)*it)->data.x_pos, 0);
            ((ArrayObject*)*it)->set_value(((ArrayObject*)*it)->get_value(((ArrayObject*)*it)->data.x_pos+1, 1), ((ArrayObject*)*it)->data.x_pos, 1);
            ((ArrayObject*)*it)->set_value(((ArrayObject*)*it)->get_value(((ArrayObject*)*it)->data.x_pos+1, 2), ((ArrayObject*)*it)->data.x_pos, 2);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2147_46_end: ;
}
void Frames::loop_shift_query_me_46()
{
    event_func_11091();
}
void Frames::event_func_11092()
{
    // event 2146_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2146_46_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos, 0)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) goto event_2146_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)-1);
        }
        {
            loop_shift_query_me_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4)-((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos);
            loop_shift_query_me_index = 0;
            while (loop_shift_query_me_index < times) {
                loop_shift_query_me_46();
                if (!loop_shift_query_me_running) break;
                loop_shift_query_me_index++;
            }
        }
            loop_iterate_query_me_stop_running = false;
    
    }
    event_2146_46_end: ;
}
void Frames::event_func_11093()
{
    // event 2148_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2148_46_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2148_46_end: ;
}
void Frames::loop_iterate_query_me_stop_46()
{
    event_func_11092();
    event_func_11093();
}
void Frames::event_func_11094()
{
    // event 2132_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2132_46_end;
        if (!media.is_channel_playing(32-1)) goto event_2132_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(4))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2132_46_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(((Active*)get_single(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(3), ((ArrayObject*)*it)->data.x_pos, 0);
            ((ArrayObject*)*it)->set_value(media.get_channel_position(-1 +32), ((ArrayObject*)*it)->data.x_pos, 1);
            ((ArrayObject*)*it)->set_value(((Active*)get_single(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(6), ((ArrayObject*)*it)->data.x_pos, 2);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2132_46_end: ;
}
void Frames::event_func_11095()
{
    // event 2133_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2133_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) <= (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(4))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2133_46_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(3)));
        }
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_play_music_56+((StringParser*)get_instance(stringparser_427_instances))->get_element(2));
            if (dyn_it == (*loops).end()) goto dynamic_2133_46_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_2133_46_0_end: ;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(2)));
            ((Active*)*it)->alterables->values.set(6, string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(4)));
        }
        media.set_channel_volume(32-1, global_values->get(25));
    }
    event_2133_46_end: ;
}
void Frames::event_func_11096()
{
    // event 2134_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2134_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        {
            loop_iterate_query_me_stop_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4));
            loop_iterate_query_me_stop_index = 0;
            while (loop_iterate_query_me_stop_index < times) {
                loop_iterate_query_me_stop_46();
                if (!loop_iterate_query_me_stop_running) break;
                loop_iterate_query_me_stop_index++;
            }
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((Active*)get_instance(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(4);
        }
    }
    event_2134_46_end: ;
}
void Frames::event_func_11097()
{
    // event 2135_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2135_46_end;
        if (!media.is_channel_playing(32-1)) goto event_2135_46_end;
        if (!((string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(3))) == (0))) goto event_2135_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(4))))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(11)) == (0))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2135_46_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(2)), ((ArrayObject*)*it)->data.x_pos, 0);
            ((ArrayObject*)*it)->set_value(0, ((ArrayObject*)*it)->data.x_pos, 1);
            ((ArrayObject*)*it)->set_value(string_to_number(((StringParser*)get_instance(stringparser_427_instances, it.current_index))->get_element(4)), ((ArrayObject*)*it)->data.x_pos, 2);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_2135_46_end: ;
}
void Frames::loop_process_call_play_music_46()
{
    event_func_11094();
    event_func_11095();
    event_func_11096();
    event_func_11097();
}
void Frames::event_func_11098()
{
    // event 2143_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2143_46_end;
        if (!((((StringParser*)get_instance(stringparser_427_instances))->value.size()) == (12))) goto event_2143_46_end;
        media.stop_channel(32-1);
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_2143_46_end: ;
}
void Frames::event_func_11099()
{
    // event 2144_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2144_46_end;
        if (!((((StringParser*)get_instance(stringparser_427_instances))->value.size()) > (12))) goto event_2144_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2144_46_end;
        media.stop_channel(32-1);
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(6, 0);
        }
    }
    event_2144_46_end: ;
}
void Frames::event_func_11100()
{
    // event 2145_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2145_46_end;
        if (!((((StringParser*)get_instance(stringparser_427_instances))->value.size()) > (12))) goto event_2145_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2145_46_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        {
            loop_iterate_query_me_stop_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4));
            loop_iterate_query_me_stop_index = 0;
            while (loop_iterate_query_me_stop_index < times) {
                loop_iterate_query_me_stop_46();
                if (!loop_iterate_query_me_stop_running) break;
                loop_iterate_query_me_stop_index++;
            }
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((Active*)get_instance(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(4);
        }
    }
    event_2145_46_end: ;
}
void Frames::loop_process_call_stop_music_46()
{
    event_func_11098();
    event_func_11099();
    event_func_11100();
}
void Frames::event_func_11101()
{
    // event 2141_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2141_46_end;
        if (!((((ArrayObject*)get_instance(queuemusic_232_instances))->get_value(((ArrayObject*)get_instance(queuemusic_232_instances))->data.x_pos, 0)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) goto event_2141_46_end;
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_value(0, ((ArrayObject*)*it)->data.x_pos, 1);
        }
            loop_iterate_query_me_reset_running = false;
    
    }
    event_2141_46_end: ;
}
void Frames::loop_iterate_query_me_reset_46()
{
    event_func_11101();
    event_func_11093();
}
void Frames::event_func_11102()
{
    // event 2139_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2139_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2139_46_end;
        if (!((global_values->get(4)) >= (0))) goto event_2139_46_end;
        media.set_channel_position(32-1, 0);
    }
    event_2139_46_end: ;
}
void Frames::event_func_11103()
{
    // event 2140_46
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_me_music_engine_1)) goto event_2140_46_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (string_to_number(((StringParser*)get_instance(stringparser_427_instances))->get_element(2))))) { it.deselect(); continue; }
        }
        if (!controllermusic_128_instances.has_selection()) goto event_2140_46_end;
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((ArrayObject*)get_instance(queuemusic_232_instances, it.current_index))->data.x_pos);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = 0;
        }
        {
            loop_iterate_query_me_reset_running = true;
            int times = int(((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(4));
            loop_iterate_query_me_reset_index = 0;
            while (loop_iterate_query_me_reset_index < times) {
                loop_iterate_query_me_reset_46();
                if (!loop_iterate_query_me_reset_running) break;
                loop_iterate_query_me_reset_index++;
            }
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->data.x_pos = ((Active*)get_instance(controllermusic_128_instances, it.current_index, default_active_instance))->alterables->values.get(4);
        }
    }
    event_2140_46_end: ;
}
void Frames::loop_process_call_reset_music_46()
{
    event_func_11102();
    event_func_11103();
}
void Frames::loop_wrapper_sound_hurt1_46(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_46(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_46(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_46(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_46(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_46();
}
void Frames::loop_wrapper_sound_idle7_46(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_46(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_46(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_46(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_46(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_46();
}
void Frames::loop_wrapper_process_call_fadeout_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_46();
}
void Frames::loop_wrapper_sound_explode8_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_46();
}
void Frames::loop_wrapper_sound_hurt2_46(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_46(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_46(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_46(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_46(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_46(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_46();
}
