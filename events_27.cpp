#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_2318()
{
    // event 1135_13
    {
        if (!(group_main_engine_1)) goto event_1135_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (120))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1135_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(get_direction_int(((Active*)*it)->x, ((Active*)*it)->y, ((Active*)get_instance(guiicon_452_instances))->x + 0, ((Active*)get_instance(guiicon_452_instances))->y + 0));
            ((Active*)*it)->force_direction((((Active*)*it)->get_direction()/math_helper/16)*16+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1135_13_end: ;
}
void Frames::event_func_2319()
{
    // event 1136_13
    {
        if (!(group_main_engine_1)) goto event_1136_13_end;
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (120))) { it.deselect(); continue; }
        }
        if (!objectextralife_304_instances.has_selection()) goto event_1136_13_end;
        guiicon_452_instances.clear_selection();
        if (!check_overlap(objectextralife_304_instances, guiicon_452_instances)) goto event_1136_13_end;
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        set_lives(manager.lives + (1));
        ringsparkle_139_instances.empty_selection();
        // select single: false true false
        for (ObjectIterator p_it(objectextralife_304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                ringsparkle_139_instances.add_back();
            }
        }
        FrameObject * single_instance_1136_13_1; single_instance_1136_13_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(guiicon_452_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_obj1up_337(parent->x + 22, parent->y + 4), parent->layer);
                if (single_instance_1136_13_1 == NULL)
                    single_instance_1136_13_1 = new_obj;
            }
        }
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(objectextralife_304_instances, it.current_index, default_active_instance))->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)get_single(objectextralife_304_instances, it.current_index, default_active_instance))->get_y()+randrange(16)-randrange(16));
        }
    }
    event_1136_13_end: ;
}
void Frames::event_func_2320()
{
    // event 1138_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_collectables_tao_stone_1)) goto event_1138_13_end;
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
        }
        if (!effectsexplosion01_309_instances.has_selection()) goto event_1138_13_end;
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)-70);
        }
    }
    event_1138_13_end: ;
}
void Frames::event_func_2321()
{
    // event 1142_13
    {
        if (!(group_main_engine_1)) goto event_1142_13_end;
        monitorcrystals_324_instances.clear_selection();
        for (ObjectIterator it(monitorcrystals_324_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/120)%math_helper%5);
        }
        monitorcrate_409_instances.clear_selection();
        for (ObjectIterator it(monitorcrate_409_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/50)%math_helper%30);
        }
        monitor1up_410_instances.clear_selection();
        for (ObjectIterator it(monitor1up_410_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((frame_time * 1000.0)/math_helper/50)%math_helper%30);
        }
    }
    event_1142_13_end: ;
}
void Frames::event_func_2322()
{
    // event 1143_13
    {
        if (!(group_main_engine_1)) goto event_1143_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (46))) goto event_1143_13_end;
        playersensortopbig_395_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playersensortopbig_395_instances, qualifier_19)) goto event_1143_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) < (2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1143_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
            ((Active*)*it)->alterables->values.set(1, -2);
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1143_13_end: ;
}
void Frames::event_func_2323()
{
    // event 1144_13
    {
        if (!(group_main_engine_1)) goto event_1144_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1144_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.set(1, get_min(((Active*)*it)->alterables->values.get(1)+0.2, 10));
        }
    }
    event_1144_13_end: ;
}
void Frames::event_func_2324()
{
    // event 1145_13
    {
        if (!(group_main_engine_1)) goto event_1145_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1145_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        {
            loop_monitorsunstuckfromceiling_running = true;
            int times = int(10);
            loop_monitorsunstuckfromceiling_index = 0;
            while (loop_monitorsunstuckfromceiling_index < times) {
                loop_monitorsunstuckfromceiling_13();
                if (!loop_monitorsunstuckfromceiling_running) break;
                loop_monitorsunstuckfromceiling_index++;
            }
        }
    }
    event_1145_13_end: ;
}
void Frames::event_func_2325()
{
    // event 1146_13
    {
        if (!(group_main_engine_1)) goto event_1146_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1146_13_end;
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
        collapsingplatform_745_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
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
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
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
        breakablefloor2_1761_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
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
        lockeddoorbarrier_2667_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
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
        enemyrocketpunchershield_3162_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        gimmickcannonbase_2198_instances.clear_selection();
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
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
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
        switchdoor_735_instances.clear_selection();
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
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_7)) goto event_1146_13_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1146_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1146_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        {
            loop_monitorsunstuckfromceiling_running = true;
            int times = int(10);
            loop_monitorsunstuckfromceiling_index = 0;
            while (loop_monitorsunstuckfromceiling_index < times) {
                loop_monitorsunstuckfromceiling_13();
                if (!loop_monitorsunstuckfromceiling_running) break;
                loop_monitorsunstuckfromceiling_index++;
            }
        }
    }
    event_1146_13_end: ;
}
void Frames::event_func_2326()
{
    // event 1148_13
    {
        if (!(group_main_engine_1)) goto event_1148_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1148_13_end;
        {
            loop_monitorsunstuckfromground_running = true;
            int times = int(10);
            loop_monitorsunstuckfromground_index = 0;
            while (loop_monitorsunstuckfromground_index < times) {
                loop_monitorsunstuckfromground_13();
                if (!loop_monitorsunstuckfromground_running) break;
                loop_monitorsunstuckfromground_index++;
            }
        }
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1148_13_end: ;
}
void Frames::event_func_2327()
{
    // event 1149_13
    {
        if (!(group_main_engine_1)) goto event_1149_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1149_13_end;
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
        collapsingplatform_745_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
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
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
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
        breakablefloor2_1761_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
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
        lockeddoorbarrier_2667_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
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
        enemyrocketpunchershield_3162_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        gimmickcannonbase_2198_instances.clear_selection();
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
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
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
        switchdoor_735_instances.clear_selection();
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
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_7)) goto event_1149_13_end;
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_7.has_selection()) goto event_1149_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1149_13_end;
        {
            loop_monitorsunstuckfromground_running = true;
            int times = int(10);
            loop_monitorsunstuckfromground_index = 0;
            while (loop_monitorsunstuckfromground_index < times) {
                loop_monitorsunstuckfromground_13();
                if (!loop_monitorsunstuckfromground_running) break;
                loop_monitorsunstuckfromground_index++;
            }
        }
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1149_13_end: ;
}
void Frames::event_func_2328()
{
    // event 1150_13
    {
        if (!(group_main_engine_1)) goto event_1150_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1150_13_end;
        qualifier_8.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_8)) goto event_1150_13_end;
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!qualifier_8.has_selection()) goto event_1150_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1150_13_end;
        {
            loop_monitorsunstuckfromground_running = true;
            int times = int(10);
            loop_monitorsunstuckfromground_index = 0;
            while (loop_monitorsunstuckfromground_index < times) {
                loop_monitorsunstuckfromground_13();
                if (!loop_monitorsunstuckfromground_running) break;
                loop_monitorsunstuckfromground_index++;
            }
        }
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1150_13_end: ;
}
void Frames::event_func_2329()
{
    // event 1151_13
    {
        if (!(group_main_engine_1)) goto event_1151_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1151_13_end;
        player_389_instances.clear_selection();
        if (!check_overlap(qualifier_19, player_389_instances)) goto event_1151_13_end;
        {
            loop_monitorsunstuckfromground_running = true;
            int times = int(10);
            loop_monitorsunstuckfromground_index = 0;
            while (loop_monitorsunstuckfromground_index < times) {
                loop_monitorsunstuckfromground_13();
                if (!loop_monitorsunstuckfromground_running) break;
                loop_monitorsunstuckfromground_index++;
            }
        }
    }
    event_1151_13_end: ;
}
void Frames::event_func_2330()
{
    // event 1158_13
    {
        if (!(group_main_engine_1)) goto event_1158_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1158_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+((Active*)*it)->alterables->values.get(24));
            ((Active*)*it)->alterables->values.set(24, get_min(((Active*)*it)->alterables->values.get(24)+0.25, 15));
        }
    }
    event_1158_13_end: ;
}
void Frames::event_func_2331()
{
    // event 1159_13
    {
        if (!(group_main_engine_1)) goto event_1159_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->outside_playfield())) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1159_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1159_13_end: ;
}
void Frames::event_func_2332()
{
    // event 1160_13
    {
        if (!(group_main_engine_1)) goto event_1160_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (5))) goto event_1160_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_1160_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (30))) goto event_1160_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (46))) goto event_1160_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1160_13_end: ;
}
void Frames::event_func_2333()
{
    // event 1161_13
    bool or_result_1161_13 = false;
    bool or_temp_result_1161_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1161_13_0_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (5))) goto or_event_1161_13_0_end;
        or_result_1161_13 = true;
        or_temp_result_1161_13_0 = true;
    }
    or_event_1161_13_0_end: ;
    // event 1161_13
    bool or_temp_result_1161_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1161_13_1_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (6))) goto or_event_1161_13_1_end;
        or_result_1161_13 = true;
        or_temp_result_1161_13_1 = true;
    }
    or_event_1161_13_1_end: ;
    // event 1161_13
    bool or_temp_result_1161_13_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1161_13_2_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (30))) goto or_event_1161_13_2_end;
        or_result_1161_13 = true;
        or_temp_result_1161_13_2 = true;
    }
    or_event_1161_13_2_end: ;
    // event 1161_13
    bool or_temp_result_1161_13_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1161_13_3_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (46))) goto or_event_1161_13_3_end;
        or_result_1161_13 = true;
        or_temp_result_1161_13_3 = true;
    }
    or_event_1161_13_3_end: ;
    // event 1161_13
    bool or_temp_result_1161_13_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1161_13_4_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1161_13_4_end;
        or_result_1161_13 = true;
        or_temp_result_1161_13_4 = true;
    }
    or_event_1161_13_4_end: ;
    qualifier_19.clear_saved_selection();
    if (or_temp_result_1161_13_4) {
        qualifier_19.save_selection();
    }
    // event 1161_13
    bool or_temp_result_1161_13_5 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1161_13_5_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1161_13_5_end;
        or_result_1161_13 = true;
        or_temp_result_1161_13_5 = true;
    }
    or_event_1161_13_5_end: ;
    if (or_temp_result_1161_13_5) {
        qualifier_19.save_selection();
    }
    // event 1161_13
    bool or_temp_result_1161_13_6 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1161_13_6_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (3))) goto or_event_1161_13_6_end;
        if (!((get_abs(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1))) > (5))) goto or_event_1161_13_6_end;
        or_result_1161_13 = true;
        or_temp_result_1161_13_6 = true;
        or_event_1161_13_6_end: ;
        if (!or_result_1161_13) goto or_final_or_event_1161_13_6_end;
        qualifier_19.clear_selection();
        if (or_temp_result_1161_13_4 || or_temp_result_1161_13_5) {
            qualifier_19.restore_selection();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1161_13_6_end: ;
}
void Frames::event_func_2334()
{
    // event 1167_13
    bool or_result_1167_13 = false;
    bool or_temp_result_1167_13_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1167_13_2_end;
        shieldinstashield_359_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(shieldinstashield_359_instances, qualifier_19)) goto or_event_1167_13_2_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1167_13_2_end;
        FrameObject * single_instance_1167_13_0; single_instance_1167_13_0 = pick_random(qualifier_19);
        if (single_instance_1167_13_0 == NULL) goto or_event_1167_13_2_end;
        or_result_1167_13 = true;
        or_temp_result_1167_13_2 = true;
    }
    or_event_1167_13_2_end: ;
    qualifier_19.clear_saved_selection();
    shieldinstashield_359_instances.clear_saved_selection();
    if (or_temp_result_1167_13_2) {
        qualifier_19.save_selection();
        shieldinstashield_359_instances.save_selection();
    }
    // event 1167_13
    bool or_temp_result_1167_13_3 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1167_13_3_end;
        playerprojectile_320_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playerprojectile_320_instances, qualifier_19)) goto or_event_1167_13_3_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1167_13_3_end;
        or_result_1167_13 = true;
        or_temp_result_1167_13_3 = true;
    }
    or_event_1167_13_3_end: ;
    playerprojectile_320_instances.clear_saved_selection();
    if (or_temp_result_1167_13_3) {
        playerprojectile_320_instances.save_selection();
        qualifier_19.save_selection();
    }
    // event 1167_13
    bool or_temp_result_1167_13_4 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1167_13_4_end;
        monitoricon_331_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(monitoricon_331_instances, qualifier_19)) goto or_event_1167_13_4_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (10))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto or_event_1167_13_4_end;
        or_result_1167_13 = true;
        or_temp_result_1167_13_4 = true;
        or_event_1167_13_4_end: ;
        monitoricon_331_instances.clear_saved_selection();
        if (or_temp_result_1167_13_4) {
            monitoricon_331_instances.save_selection();
            qualifier_19.save_selection();
        }
        if (!or_result_1167_13) goto or_final_or_event_1167_13_4_end;
        shieldinstashield_359_instances.empty_selection();
        playerprojectile_320_instances.empty_selection();
        qualifier_19.empty_selection();
        monitoricon_331_instances.empty_selection();
        if (or_temp_result_1167_13_4) {
            monitoricon_331_instances.restore_selection();
        }
        if (or_temp_result_1167_13_2 || or_temp_result_1167_13_3 || or_temp_result_1167_13_4) {
            qualifier_19.restore_selection();
        }
        if (or_temp_result_1167_13_2) {
            shieldinstashield_359_instances.restore_selection();
        }
        if (or_temp_result_1167_13_3) {
            playerprojectile_320_instances.restore_selection();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1167_13_4_end: ;
}
void Frames::event_func_2335()
{
    // event 1168_13
    {
        if (!(group_main_engine_1)) goto event_1168_13_end;
        playerreflect_447_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_19)) goto event_1168_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (2))) goto event_1168_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1168_13_end;
        FrameObject * single_instance_1168_13_0; single_instance_1168_13_0 = pick_random(qualifier_19);
        if (single_instance_1168_13_0 == NULL) goto event_1168_13_end;
        ((Active*)((Active*)single_instance_1168_13_0))->alterables->flags.enable(6);
        ((Active*)get_instance(playerreflect_447_instances))->alterables->values.set(0, 3);
    }
    event_1168_13_end: ;
}
void Frames::event_func_2336()
{
    // event 1169_13
    {
        if (!(group_main_engine_1)) goto event_1169_13_end;
        playerreflect_447_instances.clear_selection();
        qualifier_19.clear_selection();
        if (!check_overlap(playerreflect_447_instances, qualifier_19)) goto event_1169_13_end;
        if (!((((Active*)get_instance(playerreflect_447_instances))->alterables->values.get(0)) == (5))) goto event_1169_13_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1169_13_end;
        FrameObject * single_instance_1169_13_0; single_instance_1169_13_0 = pick_random(qualifier_19);
        if (single_instance_1169_13_0 == NULL) goto event_1169_13_end;
        ((Active*)((Active*)single_instance_1169_13_0))->alterables->flags.enable(6);
    }
    event_1169_13_end: ;
}
void Frames::event_func_2337()
{
    // event 1170_13
    bool or_result_1170_13 = false;
    bool or_temp_result_1170_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1170_13_0_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1170_13_0_end;
        or_result_1170_13 = true;
        or_temp_result_1170_13_0 = true;
    }
    or_event_1170_13_0_end: ;
    qualifier_19.clear_saved_selection();
    if (or_temp_result_1170_13_0) {
        qualifier_19.save_selection();
    }
    // event 1170_13
    bool or_temp_result_1170_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1170_13_1_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1170_13_1_end;
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
        collapsingplatform_745_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
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
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
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
        breakablefloor2_1761_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
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
        lockeddoorbarrier_2667_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
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
        enemyrocketpunchershield_3162_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        gimmickcannonbase_2198_instances.clear_selection();
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
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
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
        switchdoor_735_instances.clear_selection();
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
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_7)) goto or_event_1170_13_1_end;
        or_result_1170_13 = true;
        or_temp_result_1170_13_1 = true;
    }
    or_event_1170_13_1_end: ;
    qualifier_7.clear_saved_selection();
    if (or_temp_result_1170_13_1) {
        qualifier_19.save_selection();
        qualifier_7.save_selection();
    }
    // event 1170_13
    bool or_temp_result_1170_13_2 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1170_13_2_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto or_event_1170_13_2_end;
        qualifier_8.clear_selection();
        if (!check_overlap(qualifier_19, qualifier_8)) goto or_event_1170_13_2_end;
        or_result_1170_13 = true;
        or_temp_result_1170_13_2 = true;
        or_event_1170_13_2_end: ;
        qualifier_8.clear_saved_selection();
        if (or_temp_result_1170_13_2) {
            qualifier_19.save_selection();
            qualifier_8.save_selection();
        }
        if (!or_result_1170_13) goto or_final_or_event_1170_13_2_end;
        qualifier_8.empty_selection();
        qualifier_7.empty_selection();
        qualifier_19.empty_selection();
        if (or_temp_result_1170_13_1) {
            qualifier_7.restore_selection();
        }
        if (or_temp_result_1170_13_0 || or_temp_result_1170_13_1 || or_temp_result_1170_13_2) {
            qualifier_19.restore_selection();
        }
        if (or_temp_result_1170_13_2) {
            qualifier_8.restore_selection();
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(6);
        }
    }
    or_final_or_event_1170_13_2_end: ;
}
void Frames::event_func_2338()
{
    // event 1173_13
    {
        if (!(group_main_engine_1)) goto event_1173_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1173_13_end;
        FrameObject * single_instance_1173_13_0; single_instance_1173_13_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1173_13_0 == NULL)
                    single_instance_1173_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1173_13_0))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1173_13_0))->move_back();
    }
    event_1173_13_end: ;
}
void Frames::event_func_2339()
{
    // event 1174_13
    {
        if (!(group_main_engine_1)) goto event_1174_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1174_13_end;
        FrameObject * single_instance_1174_13_0; single_instance_1174_13_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1174_13_0 == NULL)
                    single_instance_1174_13_0 = new_obj;
            }
        }
    }
    event_1174_13_end: ;
}
void Frames::event_func_2340()
{
    // event 1175_13
    {
        if (!(group_main_engine_1)) goto event_1175_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-1))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1175_13_end;
        media.play_id(SOUND_ITEM_CRYSTALBOX_309, -1, 1);
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1175_13_end: ;
}
void Frames::event_func_2341()
{
    // event 1176_13
    {
        if (!(group_main_engine_1)) goto event_1176_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1176_13_end;
        media.play_id(SOUND_ITEM_SHIELDBOX_2_310, -1, 1);
        media.play_id(SOUND_ITEM_BREAK_318, -1, 1);
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1176_13_end: ;
}
void Frames::event_func_2342()
{
    // event 1177_13
    {
        if (!(group_main_engine_1)) goto event_1177_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) == (3))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1177_13_end;
        media.play_id(SOUND_ITEM_CRATE_2_280, -1, 1);
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1177_13_end: ;
}
void Frames::event_func_2343()
{
    // event 1178_13
    {
        if (!(group_main_engine_1)) goto event_1178_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) != (3))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1178_13_end;
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_1178_13_end: ;
}
void Frames::event_func_2344()
{
    // event 1180_13
    {
        if (!(group_main_engine_1)) goto event_1180_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1180_13_end;
        FrameObject * single_instance_1180_13_0; single_instance_1180_13_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1180_13_0 == NULL)
                    single_instance_1180_13_0 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1180_13_0))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1180_13_0))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->get_direction());
    }
    event_1180_13_end: ;
}
void Frames::event_func_2345()
{
    // event 1181_13
    {
        if (!(group_main_engine_1)) goto event_1181_13_end;
        qualifier_19.clear_selection();
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) > (2))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1181_13_end;
        FrameObject * single_instance_1181_13_0; single_instance_1181_13_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_19); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitoricon_331(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1181_13_0 == NULL)
                    single_instance_1181_13_0 = new_obj;
            }
        }
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1181_13_0))->force_frame(((Active*)get_single(qualifier_19, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1181_13_0))->set_direction(((Active*)get_single(qualifier_19, default_active_instance))->get_direction());
    }
    event_1181_13_end: ;
}
void Frames::event_func_2346()
{
    // event 1182_13
    {
        if (!(group_main_engine_1)) goto event_1182_13_end;
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!monitorbroken_330_instances.has_selection()) goto event_1182_13_end;
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
    }
    event_1182_13_end: ;
}
void Frames::event_func_2347()
{
    // event 1183_13
    {
        if (!(group_main_engine_1)) goto event_1183_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1183_13_end: ;
}
void Frames::event_func_2348()
{
    // event 1184_13
    {
        if (!(group_main_engine_1)) goto event_1184_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (32))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1184_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)*it);
            if (parent == NULL) goto pos_end_1184_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + -1);
            pos_end_1184_13_0: ;
        }
    }
    event_1184_13_end: ;
}
void Frames::event_func_2349()
{
    // event 1185_13
    bool or_result_1185_13 = false;
    bool or_temp_result_1185_13_0 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1185_13_0_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (10))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) <= (11))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (5))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto or_event_1185_13_0_end;
        or_result_1185_13 = true;
        or_temp_result_1185_13_0 = true;
    }
    or_event_1185_13_0_end: ;
    monitoricon_331_instances.clear_saved_selection();
    if (or_temp_result_1185_13_0) {
        monitoricon_331_instances.save_selection();
    }
    // event 1185_13
    bool or_temp_result_1185_13_1 = false;
    {
        if (!(group_main_engine_1)) goto or_event_1185_13_1_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) >= (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) < (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (5))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto or_event_1185_13_1_end;
        or_result_1185_13 = true;
        or_temp_result_1185_13_1 = true;
        or_event_1185_13_1_end: ;
        if (or_temp_result_1185_13_1) {
            monitoricon_331_instances.save_selection();
        }
        if (!or_result_1185_13) goto or_final_or_event_1185_13_1_end;
        monitoricon_331_instances.empty_selection();
        if (or_temp_result_1185_13_0 || or_temp_result_1185_13_1) {
            monitoricon_331_instances.restore_selection();
        }
        FrameObject * single_instance_1185_13_0; single_instance_1185_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1185_13_0 == NULL)
                    single_instance_1185_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        ((Active*)((Active*)single_instance_1185_13_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1185_13_0))->force_frame(35+((Active*)get_single(monitoricon_331_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1185_13_0))->set_direction(4+((Active*)get_single(monitoricon_331_instances, default_active_instance))->alterables->values.get(2)*2);
        {
            ((Active*)single_instance_1185_13_0)->set_shader(Render::ADDITIVE);
        }
    }
    or_final_or_event_1185_13_1_end: ;
}
void Frames::event_func_2350()
{
    // event 1186_13
    {
        if (!(group_main_engine_1)) goto event_1186_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) < (5))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1186_13_end;
        FrameObject * single_instance_1186_13_0; single_instance_1186_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1186_13_0 == NULL)
                    single_instance_1186_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
        ((Active*)((Active*)single_instance_1186_13_0))->get_movement()->set_speed(40+randrange(80));
        ((Active*)((Active*)single_instance_1186_13_0))->force_frame(110+((Active*)get_single(monitoricon_331_instances, default_active_instance))->alterables->values.get(2));
        ((Active*)((Active*)single_instance_1186_13_0))->set_direction(4+((Active*)get_single(monitoricon_331_instances, default_active_instance))->alterables->values.get(2)*2);
    }
    event_1186_13_end: ;
}
void Frames::event_func_2351()
{
    // event 1187_13
    {
        if (!(group_main_engine_1)) goto event_1187_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (1))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1187_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(0, 4);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(1, ((Active*)get_single(monitoricon_331_instances, default_active_instance))->get_x()+16);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(2, ((Active*)get_single(monitoricon_331_instances, default_active_instance))->get_y()+8);
        ((Active*)get_instance(masterringloss_431_instances))->alterables->values.set(9, 1);
        {
            loop_spawn_rings_running = true;
            int times = int(6);
            loop_spawn_rings_index = 0;
            while (loop_spawn_rings_index < times) {
                loop_spawn_rings_13();
                if (!loop_spawn_rings_running) break;
                loop_spawn_rings_index++;
            }
        }
        effectsheart_307_instances.empty_selection();
        // select single: false true false
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 16, parent->y + 10), parent->layer);
                effectsheart_307_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 16, parent->y + 10), parent->layer);
                effectsheart_307_instances.add_back();
            }
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsheart_307(parent->x + 16, parent->y + 10), parent->layer);
                effectsheart_307_instances.add_back();
            }
        }
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+randrange(16)-randrange(16));
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+randrange(16)-randrange(16));
            ((Active*)*it)->alterables->values.set(1, randrange(36));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
    }
    event_1187_13_end: ;
}
void Frames::event_func_2352()
{
    // event 1190_13
    {
        if (!(group_main_engine_1)) goto event_1190_13_end;
        monitorcrystals_324_instances.clear_selection();
        for (ObjectIterator it(monitorcrystals_324_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
        }
        if (!monitorcrystals_324_instances.has_selection()) goto event_1190_13_end;
        if (!((global_values->get(3)%math_helper%30) == (1))) goto event_1190_13_end;
        FrameObject * single_instance_1190_13_0; single_instance_1190_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorcrystals_324_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1190_13_0 == NULL)
                    single_instance_1190_13_0 = new_obj;
            }
        }
    }
    event_1190_13_end: ;
}
void Frames::event_func_2353()
{
    // event 1191_13
    {
        if (!(group_main_engine_1)) goto event_1191_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1191_13_end;
        {
            loop_spawn_crystals_running = true;
            int times = int(8);
            loop_spawn_crystals_index = 0;
            while (loop_spawn_crystals_index < times) {
                loop_spawn_crystals_13();
                if (!loop_spawn_crystals_running) break;
                loop_spawn_crystals_index++;
            }
        }
    }
    event_1191_13_end: ;
}
void Frames::event_func_2354()
{
    // event 1193_13
    {
        if (!(group_main_engine_1)) goto event_1193_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (5))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1193_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1193_13_end: ;
}
void Frames::event_func_2355()
{
    // event 1194_13
    {
        if (!(group_main_engine_1)) goto event_1194_13_end;
        monitorwoodshield_325_instances.clear_selection();
        for (ObjectIterator it(monitorwoodshield_325_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!monitorwoodshield_325_instances.has_selection()) goto event_1194_13_end;
        for (ObjectIterator it(monitorwoodshield_325_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1194_13_0; single_instance_1194_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorwoodshield_325_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldwood_313(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1194_13_0 == NULL)
                    single_instance_1194_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1194_13_0))->alterables->values.set(2, ((Active*)get_single(monitorwoodshield_325_instances))->get_fixed());
    }
    event_1194_13_end: ;
}
void Frames::event_func_2356()
{
    // event 1195_13
    {
        if (!(group_main_engine_1)) goto event_1195_13_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(monitorwoodshield_325_instances))->get_fixed()))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1195_13_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(monitorwoodshield_325_instances, it.current_index));
            if (parent == NULL) goto pos_end_1195_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 12);
            pos_end_1195_13_0: ;
        }
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1195_13_end: ;
}
void Frames::event_func_2357()
{
    // event 1196_13
    {
        if (!(group_main_engine_1)) goto event_1196_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (10))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1196_13_end;
        media.play_id(SOUND_ITEM_SHIELDWOOD_2_0, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 1);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1196_13_end: ;
}
void Frames::event_func_2358()
{
    // event 1197_13
    {
        if (!(group_main_engine_1)) goto event_1197_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (10))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1197_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) <= (0))) goto event_1197_13_end;
        media.play_id(SOUND_ITEM_SHIELDWOOD_2_0, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 1);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1197_13_end: ;
}
void Frames::event_func_2359()
{
    // event 1198_13
    {
        if (!(group_main_engine_1)) goto event_1198_13_end;
        monitorearthshield_326_instances.clear_selection();
        for (ObjectIterator it(monitorearthshield_326_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!monitorearthshield_326_instances.has_selection()) goto event_1198_13_end;
        FrameObject * single_instance_1198_13_0; single_instance_1198_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorearthshield_326_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldearth_314(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1198_13_0 == NULL)
                    single_instance_1198_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(monitorearthshield_326_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)((Active*)single_instance_1198_13_0))->alterables->values.set(2, ((Active*)get_single(monitorearthshield_326_instances))->get_fixed());
    }
    event_1198_13_end: ;
}
void Frames::event_func_2360()
{
    // event 1199_13
    {
        if (!(group_main_engine_1)) goto event_1199_13_end;
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(monitorearthshield_326_instances))->get_fixed()))) { it.deselect(); continue; }
        }
        if (!shieldearth_314_instances.has_selection()) goto event_1199_13_end;
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(monitorearthshield_326_instances, it.current_index));
            if (parent == NULL) goto pos_end_1199_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 12);
            pos_end_1199_13_0: ;
        }
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1199_13_end: ;
}
void Frames::event_func_2361()
{
    // event 1200_13
    {
        if (!(group_main_engine_1)) goto event_1200_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (11))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1200_13_end;
        media.play_id(SOUND_ITEM_SHIELDEARTH_2_57, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 5);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1200_13_end: ;
}
void Frames::event_func_2362()
{
    // event 1201_13
    {
        if (!(group_main_engine_1)) goto event_1201_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (11))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1201_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) <= (0))) goto event_1201_13_end;
        media.play_id(SOUND_ITEM_SHIELDEARTH_2_57, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 5);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1201_13_end: ;
}
void Frames::event_func_2363()
{
    // event 1202_13
    {
        if (!(group_main_engine_1)) goto event_1202_13_end;
        monitorfireshield_328_instances.clear_selection();
        for (ObjectIterator it(monitorfireshield_328_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!monitorfireshield_328_instances.has_selection()) goto event_1202_13_end;
        FrameObject * single_instance_1202_13_0; single_instance_1202_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorfireshield_328_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldflameback_315(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1202_13_0 == NULL)
                    single_instance_1202_13_0 = new_obj;
            }
        }
        FrameObject * single_instance_1202_13_1; single_instance_1202_13_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorfireshield_328_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldflamefront_316(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1202_13_1 == NULL)
                    single_instance_1202_13_1 = new_obj;
            }
        }
        for (ObjectIterator it(monitorfireshield_328_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        ((Active*)((Active*)single_instance_1202_13_1))->alterables->values.set(2, ((Active*)get_single(monitorfireshield_328_instances))->get_fixed());
        ((Active*)((Active*)single_instance_1202_13_0))->alterables->values.set(2, ((Active*)get_single(monitorfireshield_328_instances))->get_fixed());
    }
    event_1202_13_end: ;
}
void Frames::event_func_2364()
{
    // event 1203_13
    {
        if (!(group_main_engine_1)) goto event_1203_13_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(monitorfireshield_328_instances))->get_fixed()))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1203_13_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(monitorfireshield_328_instances, it.current_index));
            if (parent == NULL) goto pos_end_1203_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 12);
            pos_end_1203_13_0: ;
        }
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1203_13_end: ;
}
void Frames::event_func_2365()
{
    // event 1204_13
    {
        if (!(group_main_engine_1)) goto event_1204_13_end;
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(monitorfireshield_328_instances))->get_fixed()))) { it.deselect(); continue; }
        }
        if (!shieldflameback_315_instances.has_selection()) goto event_1204_13_end;
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(monitorfireshield_328_instances, it.current_index));
            if (parent == NULL) goto pos_end_1204_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 12);
            pos_end_1204_13_0: ;
        }
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1204_13_end: ;
}
void Frames::event_func_2366()
{
    // event 1205_13
    {
        if (!(group_main_engine_1)) goto event_1205_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1205_13_end;
        media.play_id(SOUND_ITEM_SHIELDFIRE_2_2, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 2);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1205_13_end: ;
}
void Frames::event_func_2367()
{
    // event 1206_13
    {
        if (!(group_main_engine_1)) goto event_1206_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (3))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1206_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) <= (0))) goto event_1206_13_end;
        media.play_id(SOUND_ITEM_SHIELDFIRE_2_2, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 2);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1206_13_end: ;
}
void Frames::event_func_2368()
{
    // event 1207_13
    {
        if (!(group_main_engine_1)) goto event_1207_13_end;
        monitormetalshield_329_instances.clear_selection();
        for (ObjectIterator it(monitormetalshield_329_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!monitormetalshield_329_instances.has_selection()) goto event_1207_13_end;
        for (ObjectIterator it(monitormetalshield_329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1207_13_0; single_instance_1207_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitormetalshield_329_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldmagnetic_317(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1207_13_0 == NULL)
                    single_instance_1207_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1207_13_0))->alterables->values.set(2, ((Active*)get_single(monitormetalshield_329_instances))->get_fixed());
    }
    event_1207_13_end: ;
}
void Frames::event_func_2369()
{
    // event 1208_13
    {
        if (!(group_main_engine_1)) goto event_1208_13_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(monitormetalshield_329_instances))->get_fixed()))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1208_13_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(monitormetalshield_329_instances, it.current_index));
            if (parent == NULL) goto pos_end_1208_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 12);
            pos_end_1208_13_0: ;
        }
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1208_13_end: ;
}
void Frames::event_func_2370()
{
    // event 1209_13
    {
        if (!(group_main_engine_1)) goto event_1209_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1209_13_end;
        media.play_id(SOUND_ITEM_SHIELDMETAL_2_1, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 3);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1209_13_end: ;
}
void Frames::event_func_2371()
{
    // event 1210_13
    {
        if (!(group_main_engine_1)) goto event_1210_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1210_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) <= (0))) goto event_1210_13_end;
        media.play_id(SOUND_ITEM_SHIELDMETAL_2_1, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 3);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1210_13_end: ;
}
void Frames::event_func_2372()
{
    // event 1211_13
    {
        if (!(group_main_engine_1)) goto event_1211_13_end;
        monitorwatershield_327_instances.clear_selection();
        for (ObjectIterator it(monitorwatershield_327_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-50)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!monitorwatershield_327_instances.has_selection()) goto event_1211_13_end;
        for (ObjectIterator it(monitorwatershield_327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        FrameObject * single_instance_1211_13_0; single_instance_1211_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorwatershield_327_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_shieldwater_318(parent->x + 16, parent->y + 12), parent->layer);
                if (single_instance_1211_13_0 == NULL)
                    single_instance_1211_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1211_13_0))->alterables->values.set(2, ((Active*)get_single(monitorwatershield_327_instances))->get_fixed());
    }
    event_1211_13_end: ;
}
void Frames::event_func_2373()
{
    // event 1212_13
    {
        if (!(group_main_engine_1)) goto event_1212_13_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (((Active*)get_instance(monitorwatershield_327_instances))->get_fixed()))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1212_13_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(monitorwatershield_327_instances, it.current_index));
            if (parent == NULL) goto pos_end_1212_13_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 16, parent->get_y() + 12);
            pos_end_1212_13_0: ;
        }
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
        }
    }
    event_1212_13_end: ;
}
void Frames::event_func_2374()
{
    // event 1213_13
    {
        if (!(group_main_engine_1)) goto event_1213_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1213_13_end;
        media.play_id(SOUND_ITEM_SHIELDWATER_2_3, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 4);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1213_13_end: ;
}
void Frames::event_func_2375()
{
    // event 1214_13
    {
        if (!(group_main_engine_1)) goto event_1214_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (5))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1214_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) <= (0))) goto event_1214_13_end;
        media.play_id(SOUND_ITEM_SHIELDWATER_2_3, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 4);
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, get_max(global_values->get(12), 0));
    }
    event_1214_13_end: ;
}
void Frames::event_func_2376()
{
    // event 1215_13
    {
        if (!(group_main_engine_1)) goto event_1215_13_end;
        monitorinvincibility_408_instances.clear_selection();
        for (ObjectIterator it(monitorinvincibility_408_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-30)) { it.deselect(); continue; }
        }
        if (!monitorinvincibility_408_instances.has_selection()) goto event_1215_13_end;
        if (!((global_values->get(3)%math_helper%5) == (1))) goto event_1215_13_end;
        FrameObject * single_instance_1215_13_0; single_instance_1215_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorinvincibility_408_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_sparkle5_336(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1215_13_0 == NULL)
                    single_instance_1215_13_0 = new_obj;
            }
        }
        for (ObjectIterator it(monitorinvincibility_408_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame((((Active*)*it)->get_frame()+1)%math_helper%10);
        }
    }
    event_1215_13_end: ;
}
void Frames::event_func_2377()
{
    // event 1216_13
    {
        if (!(group_main_engine_1)) goto event_1216_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1216_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(0)) == (0))) goto event_1216_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1216_13_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1216_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, 1800);
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(0)+str_0_80);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1216_13_end: ;
}
void Frames::event_func_2378()
{
    // event 1217_13
    {
        if (!(group_main_engine_1)) goto event_1217_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (64))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (6))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1217_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1217_13_end: ;
}
void Frames::event_func_2379()
{
    // event 1218_13
    {
        if (!(group_main_engine_1)) goto event_1218_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1218_13_end;
        {
            loop_spawn_crystals_running = true;
            int times = int(8);
            loop_spawn_crystals_index = 0;
            while (loop_spawn_crystals_index < times) {
                loop_spawn_crystals_13();
                if (!loop_spawn_crystals_running) break;
                loop_spawn_crystals_index++;
            }
        }
    }
    event_1218_13_end: ;
}
void Frames::event_func_2380()
{
    // event 1220_13
    {
        if (!(group_main_engine_1)) goto event_1220_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) >= (5))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1220_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1220_13_end: ;
}
void Frames::event_func_2381()
{
    // event 1222_13
    {
        if (!(group_main_engine_1)) goto event_1222_13_end;
        if (!((((Active*)get_instance(monitor1up_410_instances, default_active_instance))->get_direction()) != (((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))) goto event_1222_13_end;
        monitor1up_410_instances.clear_selection();
        for (ObjectIterator it(monitor1up_410_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
        }
    }
    event_1222_13_end: ;
}
void Frames::event_func_2382()
{
    // event 1223_13
    {
        if (!(group_main_engine_1)) goto event_1223_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (8))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1223_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1223_13_0; single_instance_1223_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectextralife_304(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1223_13_0 == NULL)
                    single_instance_1223_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1223_13_0))->alterables->values.set(1, -4);
        ((Active*)((Active*)single_instance_1223_13_0))->set_direction(16+((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0));
    }
    event_1223_13_end: ;
}
void Frames::event_func_2383()
{
    // event 1224_13
    {
        if (!(group_main_engine_1)) goto event_1224_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (12))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1224_13_end;
        FrameObject * single_instance_1224_13_0; single_instance_1224_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1224_13_0 == NULL)
                    single_instance_1224_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1224_13_0))->set_direction(((Active*)get_single(monitoricon_331_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1224_13_0))->alterables->values.set(1, -2.7);
        ((Active*)((Active*)single_instance_1224_13_0))->alterables->values.set(8, -1);
    }
    event_1224_13_end: ;
}
void Frames::event_func_2384()
{
    // event 1225_13
    {
        if (!(group_main_engine_1)) goto event_1225_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (12))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1225_13_end;
        FrameObject * single_instance_1225_13_0; single_instance_1225_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1225_13_0 == NULL)
                    single_instance_1225_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1225_13_0))->set_direction(((Active*)get_single(monitoricon_331_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1225_13_0))->alterables->values.set(1, -2.7);
        ((Active*)((Active*)single_instance_1225_13_0))->alterables->values.set(8, 1);
    }
    event_1225_13_end: ;
}
void Frames::event_func_2385()
{
    // event 1226_13
    {
        if (!(group_main_engine_1)) goto event_1226_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (12))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1226_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1226_13_0; single_instance_1226_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectkeystone_311(parent->x + 16, parent->y + 16), parent->layer);
                if (single_instance_1226_13_0 == NULL)
                    single_instance_1226_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1226_13_0))->set_direction(((Active*)get_single(monitoricon_331_instances, default_active_instance))->get_direction());
        ((Active*)((Active*)single_instance_1226_13_0))->alterables->values.set(1, -3);
    }
    event_1226_13_end: ;
}
void Frames::event_func_2386()
{
    // event 1227_13
    {
        if (!(group_main_engine_1)) goto event_1227_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1227_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_visible(false);
        }
        media.stop_sample(SOUND_ITEM_ITEMBOX_12);
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25)+3, 3));
    }
    event_1227_13_end: ;
}
void Frames::event_func_2387()
{
    // event 1228_13
    {
        if (!(group_main_engine_1)) goto event_1228_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1228_13_end;
        if (!((((Active*)get_single(monitoricon_331_instances, default_active_instance))->alterables->values.get(0)%math_helper%4) == (1))) goto event_1228_13_end;
        FrameObject * single_instance_1228_13_0; single_instance_1228_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitoricon_331_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1228_13_0 == NULL)
                    single_instance_1228_13_0 = new_obj;
            }
        }
    }
    event_1228_13_end: ;
}
void Frames::event_func_2388()
{
    // event 1229_13
    {
        if (!(group_main_engine_1)) goto event_1229_13_end;
        effectsexplosion06_312_instances.clear_selection();
        monitoricon_331_instances.clear_selection();
        if (!check_overlap(effectsexplosion06_312_instances, monitoricon_331_instances)) goto event_1229_13_end;
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!effectsexplosion06_312_instances.has_selection()) goto event_1229_13_end;
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_x(((Active*)get_single(monitoricon_331_instances, it.current_index, default_active_instance))->get_x()+6+randrange(21));
            ((Active*)*it)->set_y(((Active*)get_single(monitoricon_331_instances, it.current_index, default_active_instance))->get_y()+20-(sin_deg(((Active*)get_single(monitoricon_331_instances, it.current_index, default_active_instance))->alterables->values.get(0)*5)*40));
        }
    }
    event_1229_13_end: ;
}
void Frames::event_func_2389()
{
    // event 1230_13
    {
        if (!(group_main_engine_1)) goto event_1230_13_end;
        monitoricon_331_instances.clear_selection();
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (9))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (32))) { it.deselect(); continue; }
        }
        if (!monitoricon_331_instances.has_selection()) goto event_1230_13_end;
        for (ObjectIterator it(monitoricon_331_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1230_13_end: ;
}
void Frames::event_func_2390()
{
    // event 1232_13
    {
        if (!(group_main_engine_1)) goto event_1232_13_end;
            group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    
            group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    
    }
    event_1232_13_end: ;
}
void Frames::event_func_2391()
{
    // event 1233_13
    {
        if (!(group_main_engine_1)) goto event_1233_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (1))) goto event_1233_13_end;
        if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) {
            group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = true;
        }
    }
    event_1233_13_end: ;
}
void Frames::event_func_2392()
{
    // event 1234_13
    {
        if (!(group_main_engine_1)) goto event_1234_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (2))) goto event_1234_13_end;
        if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) {
            group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = true;
        }
    }
    event_1234_13_end: ;
}
void Frames::event_func_2393()
{
    // event 1235_13
    {
        if (!(group_main_engine_1)) goto event_1235_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (3))) goto event_1235_13_end;
        if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) {
            group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = true;
        }
    }
    event_1235_13_end: ;
}
void Frames::event_func_2394()
{
    // event 1236_13
    {
        if (!(group_main_engine_1)) goto event_1236_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (4))) goto event_1236_13_end;
        if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) {
            group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = true;
        }
    }
    event_1236_13_end: ;
}
void Frames::event_func_2395()
{
    // event 1237_13
    {
        if (!(group_main_engine_1)) goto event_1237_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) == (5))) goto event_1237_13_end;
        if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) {
            group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = true;
        }
    }
    event_1237_13_end: ;
}
void Frames::event_func_2396()
{
    // event 1238_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1238_13_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1238_13_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1238_13_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1238_13_end: ;
}
void Frames::event_func_2397()
{
    // event 1239_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1239_13_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1239_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1239_13_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_single(shieldwood_313_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
    }
    event_1239_13_end: ;
}
void Frames::event_func_2398()
{
    // event 1240_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1240_13_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1240_13_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_1240_13_end;
        FrameObject * single_instance_1240_13_0; single_instance_1240_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwood_313_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsshield_306(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1240_13_0 == NULL)
                    single_instance_1240_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1240_13_0))->force_frame(0);
        ((Active*)((Active*)single_instance_1240_13_0))->stop_animation();
        ((Active*)((Active*)single_instance_1240_13_0))->alterables->values.set(2, 30+randrange(121));
        ((Active*)((Active*)single_instance_1240_13_0))->alterables->values.set(0, cos_deg(((Active*)single_instance_1240_13_0)->alterables->values.get(2))*26);
        ((Active*)((Active*)single_instance_1240_13_0))->alterables->values.set(1, sin_deg(((Active*)single_instance_1240_13_0)->alterables->values.get(2))*-26);
        ((Active*)single_instance_1240_13_0)->move_back(((Active*)get_instance(playerskinsashhair_417_instances)));
        ((Active*)((Active*)single_instance_1240_13_0))->alterables->values.set(3, randrange(360));
        ((Active*)((Active*)single_instance_1240_13_0))->set_angle(randrange(360), 0);
    }
    event_1240_13_end: ;
}
void Frames::event_func_2399()
{
    // event 1241_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1241_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1241_13_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 0.7);
            ((Active*)*it)->alterables->values.add(0, cos_deg(((Active*)*it)->alterables->values.get(3))*1.3);
            ((Active*)*it)->alterables->values.add(3, 8);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+4, 0);
        }
    }
    event_1241_13_end: ;
}
void Frames::event_func_2400()
{
    // event 1242_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1242_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (64))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1242_13_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1242_13_end: ;
}
void Frames::event_func_2401()
{
    // event 1243_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1243_13_end;
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (15))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwood_313_instances.has_selection()) goto event_1243_13_end;
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        FrameObject * single_instance_1243_13_0; single_instance_1243_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwood_313_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_objectpetal_302(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1243_13_0 == NULL)
                    single_instance_1243_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1243_13_0))->advance_movement(+1);
        ((Active*)((Active*)single_instance_1243_13_0))->alterables->values.set(0, 2);
        ((Active*)((Active*)single_instance_1243_13_0))->set_direction(8);
        media.play_id(SOUND_ITEM_HIDDEN_58, -1, 1);
    }
    event_1243_13_end: ;
}
void Frames::event_func_2402()
{
    // event 1244_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1244_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(4))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)get_instance(player_389_instances))->get_y()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)get_instance(player_389_instances))->get_y()-120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(player_389_instances))->get_x()+120))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(player_389_instances))->get_x()-120))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1244_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(4);
        }
    }
    event_1244_13_end: ;
}
void Frames::event_func_2403()
{
    // event 1245_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1245_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1245_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
        }
    }
    event_1245_13_end: ;
}
void Frames::event_func_2404()
{
    // event 1246_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_1_wood_shield_1)) goto event_1246_13_end;
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(4))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->is_near_border(-50))) { it.deselect(); continue; }
        }
        if (!objectpetal_302_instances.has_selection()) goto event_1246_13_end;
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->advance_movement(-1);
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(7, 0.5);
            ((Active*)*it)->alterables->values.set(6, 5);
        }
    }
    event_1246_13_end: ;
}
void Frames::event_func_2405()
{
    // event 1247_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_flame_shield_1)) goto event_1247_13_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1247_13_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1247_13_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1247_13_end: ;
}
void Frames::event_func_2406()
{
    // event 1248_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_flame_shield_1)) goto event_1248_13_end;
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflameback_315_instances.has_selection()) goto event_1248_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1248_13_end;
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_single(shieldflameback_315_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
    }
    event_1248_13_end: ;
}
void Frames::event_func_2407()
{
    // event 1249_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_flame_shield_1)) goto event_1249_13_end;
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldflamefront_316_instances.has_selection()) goto event_1249_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1249_13_end;
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_single(shieldflamefront_316_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
    }
    event_1249_13_end: ;
}
void Frames::event_func_2408()
{
    // event 1250_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_2_flame_shield_1)) goto event_1250_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(7)) == (1))) goto event_1250_13_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(1, 0);
        media.play_id(SOUND_ITEM_SHIELDBREAK_11, -1, 1);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(2, 0);
    }
    event_1250_13_end: ;
}
void Frames::event_func_2409()
{
    // event 1251_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1)) goto event_1251_13_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1251_13_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1251_13_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(7);
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1251_13_end: ;
}
void Frames::event_func_2410()
{
    // event 1252_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1)) goto event_1252_13_end;
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldmagnetic_317_instances.has_selection()) goto event_1252_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1252_13_end;
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_single(shieldmagnetic_317_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
    }
    event_1252_13_end: ;
}
void Frames::event_func_2411()
{
    // event 1253_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1253_13_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1253_13_end;
        if (!((((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.get(18)) != (((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)))) goto event_1253_13_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(7);
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(9, 0-(1-get_min(1, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)))*30);
        ((Active*)get_instance(playercharactersensor_383_instances))->alterables->values.set(18, ((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1));
    }
    event_1253_13_end: ;
}
void Frames::event_func_2412()
{
    // event 1254_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1254_13_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1254_13_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) != (1))) goto event_1254_13_end;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_single(shieldwater_318_instances, default_active_instance))->move_front(((Active*)get_instance(playerskinsash_418_instances)));
    }
    event_1254_13_end: ;
}
void Frames::event_func_2413()
{
    // event 1255_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1255_13_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (4))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1255_13_end;
        if (not_always_1255_13 > loop_count) {
            not_always_1255_13 = loop_count + 2;
            goto event_1255_13_end;
        }
        not_always_1255_13 = loop_count + 2;
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()+90, 0);
        }
    }
    event_1255_13_end: ;
}
void Frames::event_func_2414()
{
    // event 1256_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1256_13_end;
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_animation(7)) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (0))) { it.deselect(); continue; }
        }
        if (!shieldwater_318_instances.has_selection()) goto event_1256_13_end;
        if (!((global_values->get(3)%math_helper%3) == (0))) goto event_1256_13_end;
        FrameObject * single_instance_1256_13_0; single_instance_1256_13_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(shieldwater_318_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsshield_306(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1256_13_0 == NULL)
                    single_instance_1256_13_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1256_13_0))->force_frame(2);
        ((Active*)((Active*)single_instance_1256_13_0))->stop_animation();
        ((Active*)((Active*)single_instance_1256_13_0))->alterables->values.set(2, 30+randrange(121));
        ((Active*)((Active*)single_instance_1256_13_0))->alterables->values.set(0, cos_deg(((Active*)single_instance_1256_13_0)->alterables->values.get(2))*26);
        ((Active*)((Active*)single_instance_1256_13_0))->alterables->values.set(1, sin_deg(((Active*)single_instance_1256_13_0)->alterables->values.get(2))*26);
        ((Active*)single_instance_1256_13_0)->move_back(((Active*)get_instance(playerskinsashhair_417_instances)));
        {
            ((Active*)single_instance_1256_13_0)->set_shader(Render::ADDITIVE);
        }
    }
    event_1256_13_end: ;
}
void Frames::event_func_2415()
{
    // event 1257_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1257_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1257_13_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 1);
        }
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+3);
        }
    }
    event_1257_13_end: ;
}
void Frames::event_func_2416()
{
    // event 1258_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1258_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (-64))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1258_13_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1258_13_end: ;
}
void Frames::event_func_2417()
{
    // event 1259_13
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_common_objects_shields_4_water_shield_1)) goto event_1259_13_end;
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_frame()) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) <= (((Active*)get_instance(playerskinsash_418_instances))->get_y()-10-sin_deg(((Active*)*it)->alterables->values.get(2))*24))) { it.deselect(); continue; }
        }
        if (!effectsshield_306_instances.has_selection()) goto event_1259_13_end;
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1259_13_end: ;
}
