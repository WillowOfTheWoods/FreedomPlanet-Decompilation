#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::handle_frame_38_pre_events()
{
}
void Frames::event_func_9220()
{
    // event 2_37
    {
        if (!(group_main_engine_1)) goto event_2_37_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 44);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 19);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_2_37_end: ;
}
void Frames::event_func_9221()
{
    // event 19_37
    {
        if (!(group_main_engine_1)) goto event_19_37_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.97);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.97);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(4, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece3_468_instances))->alterables->values.set(6, -0.05);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(4, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece4_469_instances))->alterables->values.set(6, -0.2);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.7);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.97);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(3, 0.5);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -0.01);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(6, -0.1);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(6, -0.4);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, -3);
        ((SystemBox*)get_instance(levelparallaxpiece6_511_instances))->alterables->values.set(6, -6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece7_764_instances))->alterables->values.set(6, -4.5);
    }
    event_19_37_end: ;
}
void Frames::event_func_9222()
{
    // event 1454_37
    {
        if (!(group_main_engine_1)) goto event_1454_37_end;
        hazardlightningradial_2263_instances.clear_selection();
        spread_value(hazardlightningradial_2263_instances, 0, 0);
        for (ObjectIterator it(hazardlightningradial_2263_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*120);
        }
    }
    event_1454_37_end: ;
}
void Frames::event_func_9223()
{
    // event 1458_37
    {
        if (!(group_main_engine_1)) goto event_1458_37_end;
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->values.set(0, ((Active*)get_instance(switchplatform_2100_instances))->get_y());
        switchdoor_735_instances.clear_selection();
        spread_value(switchdoor_735_instances, 0, 0);
        switchplatform_2100_instances.clear_selection();
        spread_value(switchplatform_2100_instances, 2, 0);
    }
    event_1458_37_end: ;
}
void Frames::event_func_9224()
{
    // event 1468_37
    {
        if (!(group_main_engine_1)) goto event_1468_37_end;
        levelsbplatform1_2096_instances.clear_selection();
        spread_value(levelsbplatform1_2096_instances, 4, 0);
        for (ObjectIterator it(levelsbplatform1_2096_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 90+((Active*)*it)->alterables->values.get(4)*180);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*180);
        }
    }
    event_1468_37_end: ;
}
void Frames::event_func_9225()
{
    // event 1478_37
    {
        if (!(group_main_engine_1)) goto event_1478_37_end;
        gimmickspincup_2249_instances.clear_selection();
        spread_value(gimmickspincup_2249_instances, 0, 0);
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)*180);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->layer->index+1);
        }
        spread_value(gimmickspincup_2249_instances, 3, 0);
    }
    event_1478_37_end: ;
}
void Frames::event_func_9226()
{
    // event 1540_37
    {
        if (!(group_main_engine_1)) goto event_1540_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        effectwarning_1065_instances.clear_selection();
        spread_value(effectwarning_1065_instances, 0, 0);
        spread_value(enemydnacannon_2264_instances, 3, 0);
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(11);
        }
    }
    event_1540_37_end: ;
}
void Frames::event_func_9227()
{
    // event 1620_37
    {
        if (!(group_main_engine_1)) goto event_1620_37_end;
        bosssatellitearm_2252_instances.clear_selection();
        spread_value(bosssatellitearm_2252_instances, 3, 0);
        spread_value(bosssatellitearm_2252_instances, 4, 0);
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 56+(((Active*)*it)->alterables->values.get(3)%math_helper%bosssatellitearm_2252_instances.size()/math_helper/2)*24);
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)%math_helper%2)*180);
        }
        bosssatellite_2251_instances.clear_selection();
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_y());
        }
        for (ObjectIterator it(bosssatellitearm_2252_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->alterables->values.get(3));
        }
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(6, 240);
        }
        minibossufobeam2_2253_instances.clear_selection();
        spread_value(minibossufobeam2_2253_instances, 1, 0);
        for (ObjectIterator it(bosssatellite_2251_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_x());
        }
    }
    event_1620_37_end: ;
}
void Frames::event_func_9228()
{
    // event 1849_37
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_1849_37_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(4);
        }
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1849_37_end: ;
}
void Frames::on_frame_38_start_events()
{
    event_func_4133();
    event_func_9220();
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
    event_func_9221();
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
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_9222();
    event_func_9223();
    event_func_9224();
    event_func_9072();
    event_func_9225();
    event_func_9073();
    event_func_9226();
    event_func_9074();
    event_func_2686();
    event_func_2687();
    event_func_9227();
    event_func_9079();
    event_func_9080();
    event_func_9081();
    event_func_9082();
    event_func_9083();
    event_func_9084();
    event_func_9085();
    event_func_9086();
    event_func_9087();
    event_func_9088();
    event_func_9089();
    event_func_9090();
    event_func_9091();
    event_func_9092();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_9228();
    event_func_4145();
    event_func_9094();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_38_init()
{
    index = 37;
    width = 14400;
    height = 2400;
    virtual_width = 14400;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &shipplatform2_2094_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &shipplatform2_2094_instances, &levelsbplatform1_2096_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &pushableblock4_2269_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyrotorbladedeath_2126_instances, &gimmickcannonbase_2198_instances, &enemyhoppermkii_2200_instances, &enemyrotorblade_2205_instances, &enemydrone_2222_instances, &bosssatellite_2251_instances, &enemydnacannon_2264_instances, NULL};
    qualifier_20.set(7, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(8, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &switchdoor_735_instances, &switchplatform_2100_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickcannonbase_2198_instances, &breakablefloor1_1760_instances, &breakablefloor2_1761_instances, &sbloop2_2210_instances, &sbloop3_2211_instances, &sbloop5_2223_instances, &sbloop4_2224_instances, &sbloop6_2225_instances, &levelcrystalspike_2248_instances, &levelballtunnel2_2265_instances, &levelballtunnel3_2266_instances, &pushableblock4_2269_instances, &active_2270_instances, &active2_2271_instances, &active3_2272_instances, &active4_2273_instances, &sbloop7_2274_instances, NULL};
    qualifier_7.set(46, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_4.set(34, &qualifier_4_instances[0]);
    static ObjectList* qualifier_27_instances[] = {&levelballtunnel2_2265_instances, &levelballtunnel3_2266_instances, NULL};
    qualifier_27.set(2, &qualifier_27_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &pushableblock4_2269_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &sbloop4_2224_instances, &active3_2272_instances, &active4_2273_instances, &sbloop7_2274_instances, NULL};
    qualifier_10.set(7, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &sbloop2_2210_instances, &sbloop3_2211_instances, &sbloop5_2223_instances, &sbloop6_2225_instances, &active_2270_instances, &active2_2271_instances, NULL};
    qualifier_11.set(9, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2039(0, -8), 0);
    add_background_object(create_levelparallaxpiece1_2041(0, 160), 0);
    add_background_object(create_levelparallaxpiece3_2043(0, 80), 0);
    add_background_object(create_levelparallaxpiece4_2044(0, 224), 0);
    add_background_object(create_levelparallaxpiece2_2045(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_2046(0, 192), 0);
    add_background_object(create_levelparallaxpiece6_2047(8, 208), 0);
    add_background_object(create_levelparallaxzaoship_2121(128, 112), 0);
    add_background_object(create_levelparallaxpiece7_2048(0, 0), 0);
    add_background_object(create_sbblueshipbg_2237(8792, 160), 1);
    add_background_object(create_sbblueshipbg_2237(4264, 120), 1);
    add_background_object(create_sbblueshipbg_2237(2984, 120), 1);
    add_background_object(create_sbredshipbg2_2238(2952, 120), 1);
    add_background_object(create_sbredshipbg3_2239(2984, 120), 1);
    add_background_object(create_sbredshipbg2_2238(6856, 120), 1);
    add_background_object(create_sbredshipbg3_2239(6824, 120), 1);
    add_background_object(create_sbblueshipbg_2237(5544, 120), 1);
    add_background_object(create_sbblueshipbg_2237(7256, 0), 1);
    add_background_object(create_sbredshipbg2_2238(7224, 0), 1);
    add_background_object(create_sbredshipbg3_2239(7256, 0), 1);
    add_background_object(create_sbredshipbg2_2238(10104, 160), 1);
    add_background_object(create_sbredshipbg3_2239(10072, 160), 1);
    add_background_object(create_sbblueshipbg_2237(8536, 160), 1);
    add_object(create_levelfanblade_2240(3336, 720), 1);
    add_object(create_levelfanblade_2240(3336, 720), 1);
    add_object(create_levelfanblade_2240(3336, 720), 1);
    add_object(create_levelfanblade_2240(3336, 720), 1);
    add_object(create_levelfanblade_2240(3584, 720), 1);
    add_object(create_levelfanblade_2240(3584, 720), 1);
    add_object(create_levelfanblade_2240(3584, 720), 1);
    add_object(create_levelfanblade_2240(3584, 720), 1);
    add_object(create_levelfanblade_2240(3848, 648), 1);
    add_object(create_levelfanblade_2240(3848, 648), 1);
    add_object(create_levelfanblade_2240(3848, 648), 1);
    add_object(create_levelfanblade_2240(3848, 648), 1);
    add_object(create_levelfanblade_2240(4104, 648), 1);
    add_object(create_levelfanblade_2240(4104, 648), 1);
    add_object(create_levelfanblade_2240(4104, 648), 1);
    add_object(create_levelfanblade_2240(4104, 648), 1);
    add_object(create_levelfanblade_2240(3848, 416), 1);
    add_object(create_levelfanblade_2240(3848, 416), 1);
    add_object(create_levelfanblade_2240(3848, 416), 1);
    add_object(create_levelfanblade_2240(3848, 416), 1);
    add_object(create_levelfanblade_2240(4104, 416), 1);
    add_object(create_levelfanblade_2240(4104, 416), 1);
    add_object(create_levelfanblade_2240(4104, 416), 1);
    add_object(create_levelfanblade_2240(4104, 416), 1);
    add_object(create_sbbackeye_2241(6344, 400), 1);
    add_object(create_sbbackeye2_2242(6344, 400), 1);
    add_object(create_levelfanblade_2240(5896, 256), 1);
    add_object(create_levelfanblade_2240(5896, 256), 1);
    add_object(create_levelfanblade_2240(5896, 256), 1);
    add_object(create_levelfanblade_2240(5896, 256), 1);
    add_object(create_levelfanblade_2240(5632, 256), 1);
    add_object(create_levelfanblade_2240(5632, 256), 1);
    add_object(create_levelfanblade_2240(5632, 256), 1);
    add_object(create_levelfanblade_2240(5632, 256), 1);
    add_object(create_levelfanblade_2240(4872, 520), 1);
    add_object(create_levelfanblade_2240(4872, 520), 1);
    add_object(create_levelfanblade_2240(4872, 520), 1);
    add_object(create_levelfanblade_2240(4872, 520), 1);
    add_object(create_levelfanblade_2240(4616, 520), 1);
    add_object(create_levelfanblade_2240(4616, 520), 1);
    add_object(create_levelfanblade_2240(4616, 520), 1);
    add_object(create_levelfanblade_2240(4616, 520), 1);
    add_object(create_levelfanblade_2240(5384, 672), 1);
    add_object(create_levelfanblade_2240(5384, 672), 1);
    add_object(create_levelfanblade_2240(5384, 672), 1);
    add_object(create_levelfanblade_2240(5384, 672), 1);
    add_object(create_sbbackeye_2241(8304, 416), 1);
    add_object(create_sbbackeye2_2242(8304, 416), 1);
    add_object(create_levelfanblade_2240(8632, 320), 1);
    add_object(create_levelfanblade_2240(8632, 320), 1);
    add_object(create_levelfanblade_2240(8632, 320), 1);
    add_object(create_levelfanblade_2240(8632, 320), 1);
    add_object(create_levelfanblade_2240(8888, 240), 1);
    add_object(create_levelfanblade_2240(8888, 240), 1);
    add_object(create_levelfanblade_2240(8888, 240), 1);
    add_object(create_levelfanblade_2240(8888, 240), 1);
    add_object(create_sbbackeye_2241(9464, 584), 1);
    add_object(create_sbbackeye2_2242(9464, 584), 1);
    add_object(create_levelfanblade_2240(9400, 512), 1);
    add_object(create_levelfanblade_2240(9400, 512), 1);
    add_object(create_levelfanblade_2240(9400, 512), 1);
    add_object(create_levelfanblade_2240(9400, 512), 1);
    add_object(create_levelfanblade_2240(9656, 512), 1);
    add_object(create_levelfanblade_2240(9656, 512), 1);
    add_object(create_levelfanblade_2240(9656, 512), 1);
    add_object(create_levelfanblade_2240(9656, 512), 1);
    add_object(create_levelfanblade_2240(9400, 792), 1);
    add_object(create_levelfanblade_2240(9400, 792), 1);
    add_object(create_levelfanblade_2240(9400, 792), 1);
    add_object(create_levelfanblade_2240(9400, 792), 1);
    add_object(create_levelfanblade_2240(9656, 792), 1);
    add_object(create_levelfanblade_2240(9656, 792), 1);
    add_object(create_levelfanblade_2240(9656, 792), 1);
    add_object(create_levelfanblade_2240(9656, 792), 1);
    add_object(create_levelsbbgplatform_2134(375, 356), 1);
    add_object(create_levelsbbgplatform_2134(343, 356), 1);
    add_object(create_levelsbbgplatform_2134(311, 356), 1);
    add_object(create_levelsbbgplatform_2134(279, 356), 1);
    add_background_object(create_blimpcable2_2135(12880, 568), 2);
    add_background_object(create_blimpcable2_2135(13120, 504), 2);
    add_background_object(create_blimpcable2_2135(13088, 376), 2);
    add_background_object(create_blimpcable2_2135(12832, 376), 2);
    add_background_object(create_blimpcable2_2135(13104, 440), 2);
    add_background_object(create_sbironwall_2138(12792, 592), 2);
    add_background_object(create_sbironwall_2138(12536, 592), 2);
    add_background_object(create_sbironwall_2138(12792, 752), 2);
    add_background_object(create_sbironwall_2138(12536, 752), 2);
    add_background_object(create_sbironwall_2138(6896, 688), 2);
    add_background_object(create_sbironwall_2138(6784, 848), 2);
    add_background_object(create_sbwall_2146(7168, 560), 2);
    add_background_object(create_sbwallleft_2172(7152, 560), 2);
    add_background_object(create_sbbluecolumn_2243(4736, 664), 2);
    add_background_object(create_sbbluecolumn_2243(4816, 664), 2);
    add_background_object(create_sbbluecolumn_2243(4736, 600), 2);
    add_background_object(create_sbbluecolumn_2243(4816, 600), 2);
    add_background_object(create_sbbluecolumn_2243(4344, 816), 2);
    add_background_object(create_sbbluecolumn_2243(4424, 816), 2);
    add_background_object(create_sbbluecolumn_2243(5120, 816), 2);
    add_background_object(create_sbbluecolumn_2243(5200, 816), 2);
    add_background_object(create_sbbluecolumn_2243(4864, 304), 2);
    add_background_object(create_sbbluecolumn_2243(4944, 304), 2);
    add_background_object(create_sbbluecolumn_2243(4864, 240), 2);
    add_background_object(create_sbbluecolumn_2243(4944, 240), 2);
    add_background_object(create_sbbluecolumn_2243(4336, 432), 2);
    add_background_object(create_sbbluecolumn_2243(4560, 432), 2);
    add_background_object(create_sbbluecolumn_2243(4448, 432), 2);
    add_background_object(create_sbbluesupportbeam1_2244(4344, 280), 2);
    add_background_object(create_sbbluesupportbeam1_2244(4360, 216), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3944, 728), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3960, 792), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3976, 856), 2);
    add_background_object(create_sbbluesupportbeam1_2244(3784, 856), 2);
    add_background_object(create_sbbluesupportbeam1_2244(3800, 792), 2);
    add_background_object(create_sbbluesupportbeam1_2244(3816, 728), 2);
    add_background_object(create_sbbluesupportbeam1_2244(6552, 176), 2);
    add_background_object(create_sbbluesupportbeam1_2244(6648, 176), 2);
    add_background_object(create_sbbluesupportbeam1_2244(6744, 176), 2);
    add_background_object(create_sbbluesupportbeam1_2244(6840, 176), 2);
    add_background_object(create_sbbluecolumn_2243(5504, 176), 2);
    add_background_object(create_sbbluecolumn_2243(5584, 176), 2);
    add_background_object(create_sbbluecolumn_2243(5504, 112), 2);
    add_background_object(create_sbbluecolumn_2243(5584, 112), 2);
    add_background_object(create_sbbrokenfloor_2150(6656, 344), 2);
    add_background_object(create_sbironwall_2138(9280, 976), 2);
    add_background_object(create_sbironwall_2138(9536, 976), 2);
    add_background_object(create_sbironwall_2138(9280, 816), 2);
    add_background_object(create_sbironwall_2138(9536, 816), 2);
    add_background_object(create_sbbluesupportbeam1_2244(6016, 552), 2);
    add_background_object(create_sbbluesupportbeam1_2244(6048, 424), 2);
    add_background_object(create_sbbluesupportbeam1_2244(6032, 488), 2);
    add_background_object(create_sbironwall_2138(9792, 976), 2);
    add_background_object(create_sbironwall_2138(10048, 976), 2);
    add_background_object(create_sbironwall_2138(9792, 816), 2);
    add_background_object(create_sbironwall_2138(10048, 816), 2);
    add_background_object(create_sbbrokenfloor_2150(10112, 816), 2);
    add_background_object(create_sbbrokenfloor_2150(9984, 816), 2);
    add_background_object(create_sbbrokenfloor_2150(9856, 816), 2);
    add_background_object(create_sbbluesupportbeam1_2244(7656, 352), 2);
    add_background_object(create_sbbluesupportbeam1_2244(7640, 416), 2);
    add_background_object(create_sbbluesupportbeam1_2244(7624, 480), 2);
    add_background_object(create_sbbluesupportbeam1_2244(7528, 352), 2);
    add_background_object(create_sbbluesupportbeam1_2244(7512, 416), 2);
    add_background_object(create_sbbluesupportbeam1_2244(7496, 480), 2);
    add_background_object(create_sbbluesupportbeam1_2244(7544, 288), 2);
    add_background_object(create_sbbluecolumn_2243(8288, 472), 2);
    add_background_object(create_sbbluecolumn_2243(8288, 408), 2);
    add_background_object(create_sbironwall_2138(8176, 816), 2);
    add_background_object(create_blimpcable2_2135(12816, 312), 2);
    add_background_object(create_blimpcable3_2143(12712, 504), 2);
    add_background_object(create_blimpcable3_2143(12712, 248), 2);
    add_background_object(create_blimpcable3_2143(12712, 312), 2);
    add_background_object(create_blimpcable3_2143(12712, 376), 2);
    add_background_object(create_blimpcable3_2143(12712, 440), 2);
    add_background_object(create_blimpcable2_2135(12800, 248), 2);
    add_background_object(create_blimpcable2_2135(13056, 248), 2);
    add_background_object(create_blimpcable3_2143(12968, 248), 2);
    add_background_object(create_blimpcable3_2143(12968, 312), 2);
    add_background_object(create_blimpcable3_2143(12968, 376), 2);
    add_background_object(create_blimpcable3_2143(12968, 440), 2);
    add_background_object(create_blimpcable3_2143(12968, 504), 2);
    add_background_object(create_blimpcable2_2135(13072, 312), 2);
    add_background_object(create_blimpcable2_2135(12848, 440), 2);
    add_background_object(create_blimpcable2_2135(12864, 504), 2);
    add_background_object(create_sbironwall_2138(12280, 752), 2);
    add_background_object(create_sbbluecolumn_2243(11976, 664), 2);
    add_background_object(create_sbbluecolumn_2243(11640, 664), 2);
    add_background_object(create_sbbluecolumn_2243(11640, 728), 2);
    add_background_object(create_sbbluecolumn_2243(11640, 792), 2);
    add_background_object(create_sbbluecolumn_2243(11640, 856), 2);
    add_background_object(create_sbbluecolumn_2243(11640, 920), 2);
    add_background_object(create_sbbluecolumn_2243(11640, 984), 2);
    add_background_object(create_sbbluecolumn_2243(11976, 728), 2);
    add_background_object(create_sbbluecolumn_2243(11976, 792), 2);
    add_background_object(create_sbbluecolumn_2243(11976, 856), 2);
    add_background_object(create_sbbluecolumn_2243(11976, 920), 2);
    add_background_object(create_sbbluecolumn_2243(11976, 984), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3584, 240), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3600, 304), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3616, 368), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3632, 432), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3648, 496), 2);
    add_background_object(create_sbbluesupportbeam2_2245(3664, 560), 2);
    add_background_object(create_sbironwall_2138(5248, 112), 2);
    add_background_object(create_sbironwall_2138(5248, 272), 2);
    add_background_object(create_sbironwall_2138(5504, 112), 2);
    add_background_object(create_sbironwall_2138(5504, 272), 2);
    add_background_object(create_sbwallshadow_2142(8320, 816), 2);
    add_background_object(create_sbwallshadow_2142(9472, 832), 2);
    add_background_object(create_sbwallshadow_2142(9344, 832), 2);
    add_background_object(create_sbwallshadow_2142(9600, 832), 2);
    add_background_object(create_sbwallshadow_2142(9984, 832), 2);
    add_background_object(create_sbwallshadow_2142(9856, 832), 2);
    add_background_object(create_sbwallshadow_2142(10112, 832), 2);
    add_background_object(create_sbwallshadow_2142(12280, 752), 2);
    add_background_object(create_sbwallshadow_2142(12408, 752), 2);
    add_background_object(create_sbwallshadow_2142(12536, 752), 2);
    add_background_object(create_sbwallshadow_2142(12664, 752), 2);
    add_background_object(create_sbwallshadow_2142(12920, 688), 2);
    add_background_object(create_sbwallshadow_2142(12920, 816), 2);
    add_background_object(create_sbwallshadow_2142(12664, 736), 2);
    add_background_object(create_sbwallshadow_2142(12664, 720), 2);
    add_background_object(create_sbwallshadow_2142(12664, 704), 2);
    add_background_object(create_sbwallshadow_2142(5616, 112), 2);
    add_background_object(create_sbwallshadow_2142(5488, 112), 2);
    add_background_object(create_sbwallshadow_2142(5360, 112), 2);
    add_background_object(create_sbwallshadow_2142(5232, 112), 2);
    add_background_object(create_sbwallshadow_2142(6896, 688), 2);
    add_background_object(create_sbwallshadow_2142(6784, 848), 2);
    add_background_object(create_sbwallshadow_2142(6912, 848), 2);
    add_background_object(create_sbironwall_2138(5248, -48), 2);
    add_background_object(create_sbwallshadow_2142(5400, 96), 2);
    add_background_object(create_sbwallshadow_2142(5400, 80), 2);
    add_background_object(create_sbwallshadow_2142(5400, 64), 2);
    add_background_object(create_sbwallshadow_2142(5400, 48), 2);
    add_background_object(create_sbironwall_2138(8656, 112), 2);
    add_background_object(create_sbwallshadow_2142(8784, 112), 2);
    add_background_object(create_sbwallshadow_2142(8656, 128), 2);
    add_background_object(create_sbwallshadow_2142(8784, 128), 2);
    add_background_object(create_sbironwall_2138(8064, 48), 2);
    add_background_object(create_sbwallshadow_2142(8176, 48), 2);
    add_background_object(create_sbwallshadow_2142(8048, 48), 2);
    add_background_object(create_sbwallshadow_2142(8176, 64), 2);
    add_background_object(create_sbwallshadow_2142(8048, 64), 2);
    add_object(create_bosssatellitetop_2246(11832, 868), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(14600, -51), 2);
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
    add_object(create_hazardlightningradial2_2247(4512, 656), 2);
    add_object(create_hazardlightningradial2_2247(4608, 656), 2);
    add_object(create_hazardlightningradial2_2247(4824, 648), 2);
    add_object(create_hazardlightningradial2_2247(4920, 648), 2);
    add_object(create_hazardlightningradial2_2247(4920, 688), 2);
    add_object(create_switchplatformmask_2067(2864, -112), 2);
    add_object(create_levelcrystalspike_2248(-88, 1208), 2);
    add_object(create_hazardlightningradial2_2247(4640, 272), 2);
    add_object(create_hazardlightningradial2_2247(4736, 272), 2);
    add_object(create_gimmickspincup_2249(6124, 399), 2);
    add_object(create_gimmickspincup_2249(6124, 399), 2);
    add_object(create_gimmickspincup_2249(7004, 663), 2);
    add_object(create_gimmickspincup_2249(7004, 663), 2);
    add_object(create_hazardlightningradial2_2247(5280, 144), 2);
    add_object(create_hazardlightningradial2_2247(5376, 144), 2);
    add_object(create_hazardlightningradial2_2247(5472, 144), 2);
    add_object(create_bosssatellitethrusters_2250(11832, 864), 2);
    add_object(create_bosssatellite_2251(11832, 872), 2);
    add_object(create_bosssatellitearm_2252(11708, 872), 2);
    add_object(create_bosssatellitearm_2252(11732, 872), 2);
    add_object(create_bosssatellitearm_2252(11756, 872), 2);
    add_object(create_bosssatellitearm_2252(11780, 872), 2);
    add_object(create_bosssatellitearm_2252(11884, 872), 2);
    add_object(create_bosssatellitearm_2252(11908, 872), 2);
    add_object(create_bosssatellitearm_2252(11932, 872), 2);
    add_object(create_bosssatellitearm_2252(11956, 872), 2);
    add_object(create_minibossufobeam2_2253(12868, 1088), 2);
    add_object(create_minibossufobeam2_2253(12892, 1088), 2);
    add_object(create_minibossufobeam2_2253(12916, 1088), 2);
    add_object(create_minibossufobeam2_2253(12940, 1088), 2);
    add_object(create_minibossufobeam2_2253(12964, 1088), 2);
    add_object(create_minibossufobeam2_2253(12988, 1088), 2);
    add_object(create_minibossufobeam2_2253(13012, 1088), 2);
    add_object(create_minibossufobeam2_2253(13036, 1088), 2);
    add_object(create_minibossufobeam_1721(13016, 1032), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_sbwallleft_2172(6768, 240), 3);
    add_background_object(create_sbwallright_2169(6656, 240), 3);
    add_background_object(create_sbironwall_2138(7296, 752), 3);
    add_background_object(create_sbironwall_2138(7040, 688), 3);
    add_background_object(create_sbwallshadow_2142(7168, 752), 3);
    add_background_object(create_sbwallshadow_2142(7168, 768), 3);
    add_background_object(create_sbwallshadow_2142(7296, 752), 3);
    add_background_object(create_sbwallshadow_2142(7296, 768), 3);
    add_background_object(create_sbironwall_2138(12296, 304), 3);
    add_background_object(create_sbironwall_2138(12296, 464), 3);
    add_background_object(create_sbbigwall2_2145(11136, 624), 3);
    add_background_object(create_sbbigwall2_2145(11136, 880), 3);
    add_background_object(create_sbwall_2146(4352, 368), 3);
    add_background_object(create_sbbigwall_2147(4224, 496), 3);
    add_background_object(create_sbdeck8walkthru_2168(12296, 736), 3);
    add_background_object(create_sbdeck7walkthru_2167(12272, 736), 3);
    add_background_object(create_ship28_2075(9968, 1248), 3);
    add_background_object(create_sbdeck1_2148(8960, 856), 3);
    add_background_object(create_sbdeck1walkthru_2170(2944, 816), 3);
    add_background_object(create_sbironwall_2138(2832, 840), 3);
    add_background_object(create_sbsmallwall_2144(5504, 304), 3);
    add_background_object(create_sbsmallwall_2144(5504, 368), 3);
    add_background_object(create_sbbluesupportbeam2_2245(6624, 624), 3);
    add_background_object(create_sbbluesupportbeam2_2245(6688, 880), 3);
    add_background_object(create_sbironwall_2138(7424, 720), 3);
    add_background_object(create_sbironwall_2138(7296, 912), 3);
    add_background_object(create_sbironwall_2138(7040, 848), 3);
    add_background_object(create_sbironwall_2138(6144, 336), 3);
    add_background_object(create_sbironwall_2138(6144, 176), 3);
    add_background_object(create_sbwallright_2169(6656, 344), 3);
    add_background_object(create_sbwallleft_2172(6768, 344), 3);
    add_background_object(create_sbinnercurve3_2189(7024, 496), 3);
    add_background_object(create_sbironwall_2138(5888, 624), 3);
    add_background_object(create_sbwall_2146(4992, 880), 3);
    add_background_object(create_sbwall_2146(5120, 880), 3);
    add_background_object(create_sbironwall_2138(2096, 704), 3);
    add_background_object(create_blimpcable2_2135(3216, 568), 3);
    add_background_object(create_blimpcable3_2143(3112, 568), 3);
    add_background_object(create_blimpcable2_2135(2944, 568), 3);
    add_background_object(create_blimpcable3_2143(2840, 632), 3);
    add_background_object(create_blimpcable2_2135(2704, 632), 3);
    add_background_object(create_blimpcable3_2143(2584, 632), 3);
    add_background_object(create_blimpcable2_2135(1928, 728), 3);
    add_background_object(create_ship28_2075(2080, 1088), 3);
    add_background_object(create_ship28_2075(2000, 1120), 3);
    add_background_object(create_ship28_2075(2040, 1104), 3);
    add_background_object(create_sbbigwall_2147(1152, 688), 3);
    add_background_object(create_sbwall_2146(5248, 912), 3);
    add_background_object(create_blimpcable2_2135(13368, 408), 3);
    add_background_object(create_blimpcable3_2143(13240, 504), 3);
    add_background_object(create_shipfront1_2254(13320, 464), 3);
    add_background_object(create_sbshipfront_2152(13064, 624), 3);
    add_background_object(create_ship32_2153(1184, 280), 3);
    add_background_object(create_ship34_2154(1824, 280), 3);
    add_background_object(create_ship35_2155(1280, 280), 3);
    add_background_object(create_ship36_2156(1280, 440), 3);
    add_background_object(create_ship33_2157(1184, 440), 3);
    add_background_object(create_ship37_2158(1824, 440), 3);
    add_background_object(create_blimpcable1_2070(1264, 280), 3);
    add_background_object(create_quickbackdrop7_2159(1296, 440), 3);
    add_background_object(create_quickbackdrop8_2160(1296, 280), 3);
    add_background_object(create_ship35_2155(1536, 280), 3);
    add_background_object(create_ship36_2156(1536, 440), 3);
    add_background_object(create_quickbackdrop7_2159(1552, 440), 3);
    add_background_object(create_quickbackdrop8_2160(1552, 280), 3);
    add_background_object(create_ship35_2155(1808, 280), 3);
    add_background_object(create_ship36_2156(1808, 440), 3);
    add_background_object(create_blimpcable1_2070(1248, 344), 3);
    add_background_object(create_blimpcable1_2070(1232, 408), 3);
    add_background_object(create_blimpcable1_2070(1216, 472), 3);
    add_background_object(create_blimpcable1_2070(1200, 536), 3);
    add_background_object(create_blimpcable2_2135(1816, 280), 3);
    add_background_object(create_blimpcable2_2135(1832, 344), 3);
    add_background_object(create_blimpcable2_2135(1848, 408), 3);
    add_background_object(create_blimpcable2_2135(1864, 472), 3);
    add_background_object(create_blimpcable2_2135(1880, 536), 3);
    add_background_object(create_blimpcable2_2135(1288, 280), 3);
    add_background_object(create_blimpcable2_2135(1304, 344), 3);
    add_background_object(create_blimpcable2_2135(1320, 408), 3);
    add_background_object(create_blimpcable2_2135(1336, 472), 3);
    add_background_object(create_blimpcable2_2135(1352, 536), 3);
    add_background_object(create_blimpcable2_2135(1544, 280), 3);
    add_background_object(create_blimpcable2_2135(1560, 344), 3);
    add_background_object(create_blimpcable2_2135(1576, 408), 3);
    add_background_object(create_blimpcable2_2135(1592, 472), 3);
    add_background_object(create_blimpcable2_2135(1608, 536), 3);
    add_background_object(create_sbdeck1_2148(1024, 664), 3);
    add_background_object(create_sbdeck1_2148(1152, 664), 3);
    add_background_object(create_sbwall_2146(1024, 688), 3);
    add_background_object(create_sbdeck1_2148(1280, 664), 3);
    add_background_object(create_sbdeck4_2188(13192, 504), 3);
    add_background_object(create_sbwallslope4_2187(13216, 528), 3);
    add_background_object(create_sbwall_2146(13192, 560), 3);
    add_background_object(create_sbwall_2146(1920, 976), 3);
    add_background_object(create_blimpcable1_2070(1184, 600), 3);
    add_background_object(create_blimpcable2_2135(1368, 600), 3);
    add_background_object(create_blimpcable3_2143(1280, 600), 3);
    add_background_object(create_blimpcable2_2135(1624, 600), 3);
    add_background_object(create_blimpcable2_2135(1896, 600), 3);
    add_background_object(create_sbwall_2146(12536, 560), 3);
    add_background_object(create_sbdeck1_2148(12536, 536), 3);
    add_background_object(create_sbwall_2146(12664, 560), 3);
    add_background_object(create_sbdeck1_2148(12664, 536), 3);
    add_background_object(create_sbwall_2146(13064, 560), 3);
    add_background_object(create_sbdeck1_2148(13064, 536), 3);
    add_background_object(create_blimpcable3_2143(1536, 600), 3);
    add_background_object(create_blimpcable3_2143(1808, 600), 3);
    add_background_object(create_sbwallleft_2172(1008, 688), 3);
    add_background_object(create_sbwall_2146(12936, 560), 3);
    add_background_object(create_sbdeck1_2148(12936, 536), 3);
    add_background_object(create_sbwallright_2169(1920, 752), 3);
    add_background_object(create_sbdeck8_2171(1920, 728), 3);
    add_background_object(create_sbwall_2146(1280, 816), 3);
    add_background_object(create_sbwall_2146(1152, 880), 3);
    add_background_object(create_sbwall_2146(1152, 816), 3);
    add_background_object(create_sbwall_2146(1408, 816), 3);
    add_background_object(create_sbwall_2146(1536, 752), 3);
    add_background_object(create_sbwallleft_2172(1136, 752), 3);
    add_background_object(create_sbwallleft_2172(1136, 816), 3);
    add_background_object(create_sbwallleft_2172(1136, 880), 3);
    add_background_object(create_ship23_2175(1040, 752), 3);
    add_background_object(create_sbwall_2146(1152, 1008), 3);
    add_background_object(create_sbwall_2146(1152, 944), 3);
    add_background_object(create_sbwall_2146(1280, 1008), 3);
    add_background_object(create_sbwall_2146(1408, 1008), 3);
    add_background_object(create_sbwallleft_2172(1136, 944), 3);
    add_background_object(create_sbwallleft_2172(1136, 1008), 3);
    add_background_object(create_sbwall_2146(1536, 816), 3);
    add_background_object(create_sbwall_2146(1536, 976), 3);
    add_background_object(create_sbwall_2146(1664, 976), 3);
    add_background_object(create_sbdeck1_2148(1664, 728), 3);
    add_background_object(create_sbwall_2146(1792, 976), 3);
    add_background_object(create_sbdeck1_2148(1792, 728), 3);
    add_background_object(create_blimpcable3_2143(1536, 664), 3);
    add_background_object(create_blimpcable2_2135(1640, 664), 3);
    add_background_object(create_blimpcable3_2143(1808, 664), 3);
    add_background_object(create_blimpcable2_2135(1912, 664), 3);
    add_background_object(create_ship32_2153(12616, -72), 3);
    add_background_object(create_ship34_2154(13256, -72), 3);
    add_background_object(create_ship35_2155(12712, -72), 3);
    add_background_object(create_ship36_2156(12712, 88), 3);
    add_background_object(create_ship33_2157(12616, 88), 3);
    add_background_object(create_ship37_2158(13256, 88), 3);
    add_background_object(create_quickbackdrop7_2159(12728, 88), 3);
    add_background_object(create_quickbackdrop8_2160(12728, -72), 3);
    add_background_object(create_ship35_2155(12968, -72), 3);
    add_background_object(create_ship36_2156(12968, 88), 3);
    add_background_object(create_quickbackdrop7_2159(12984, 88), 3);
    add_background_object(create_quickbackdrop8_2160(12984, -72), 3);
    add_background_object(create_ship35_2155(13240, -72), 3);
    add_background_object(create_ship36_2156(13240, 88), 3);
    add_background_object(create_blimpcable2_2135(12720, -72), 3);
    add_background_object(create_blimpcable2_2135(12736, -8), 3);
    add_background_object(create_blimpcable2_2135(12752, 56), 3);
    add_background_object(create_blimpcable2_2135(12768, 120), 3);
    add_background_object(create_blimpcable2_2135(12784, 184), 3);
    add_background_object(create_blimpcable2_2135(12976, -72), 3);
    add_background_object(create_blimpcable2_2135(12992, -8), 3);
    add_background_object(create_blimpcable2_2135(13008, 56), 3);
    add_background_object(create_blimpcable2_2135(13024, 120), 3);
    add_background_object(create_blimpcable2_2135(13040, 184), 3);
    add_background_object(create_blimpcable3_2143(13240, 248), 3);
    add_background_object(create_sbdeck7_2176(1384, 728), 3);
    add_background_object(create_sbdeck7_2176(1000, 664), 3);
    add_background_object(create_sbwall_2146(1920, 1040), 3);
    add_background_object(create_sbwall_2146(12664, 624), 3);
    add_background_object(create_sbwall_2146(12936, 624), 3);
    add_background_object(create_sbwall_2146(1536, 1040), 3);
    add_background_object(create_sbwall_2146(1664, 1040), 3);
    add_background_object(create_sbwall_2146(1792, 1040), 3);
    add_background_object(create_blimpcable3_2143(13240, 312), 3);
    add_background_object(create_blimpcable3_2143(13240, 376), 3);
    add_background_object(create_blimpcable3_2143(13240, 440), 3);
    add_background_object(create_sbdeck10_2183(13320, 440), 3);
    add_background_object(create_blimpcable2_2135(13248, -72), 3);
    add_background_object(create_blimpcable2_2135(13264, -8), 3);
    add_background_object(create_blimpcable2_2135(13280, 56), 3);
    add_background_object(create_blimpcable2_2135(13296, 120), 3);
    add_background_object(create_blimpcable2_2135(13312, 184), 3);
    add_background_object(create_blimpcable2_2135(13328, 248), 3);
    add_background_object(create_blimpcable2_2135(13344, 312), 3);
    add_background_object(create_blimpcable2_2135(13360, 376), 3);
    add_background_object(create_shipbottomsail_2074(1328, 1208), 3);
    add_background_object(create_shipbottomsail_2074(1624, 1168), 3);
    add_background_object(create_shipbottomsail_2074(1704, 1144), 3);
    add_background_object(create_shipbottomsail_2074(1392, 1184), 3);
    add_background_object(create_shipbottomsail_2074(1136, 1184), 3);
    add_background_object(create_shipbottomsail_2074(1448, 1144), 3);
    add_background_object(create_ship26_2082(1200, 1272), 3);
    add_background_object(create_ship26_2082(1264, 1264), 3);
    add_background_object(create_ship26_2082(1328, 1256), 3);
    add_background_object(create_ship26_2082(1392, 1248), 3);
    add_background_object(create_ship26_2082(1456, 1240), 3);
    add_background_object(create_ship26_2082(1520, 1232), 3);
    add_background_object(create_ship26_2082(1584, 1224), 3);
    add_background_object(create_ship28_2075(1880, 1168), 3);
    add_background_object(create_ship27_2083(1648, 1208), 3);
    add_background_object(create_ship28_2075(1920, 1152), 3);
    add_background_object(create_ship28_2075(1960, 1136), 3);
    add_background_object(create_ship26_2082(1136, 1280), 3);
    add_background_object(create_shipthrusterfront_2085(1392, 1216), 3);
    add_background_object(create_shipthrusterend_2086(1008, 1216), 3);
    add_background_object(create_shipthrustermid_2088(1104, 1216), 3);
    add_background_object(create_shipbottomsailshadow_2089(1336, 1104), 3);
    add_background_object(create_shipthrusterend_2086(1008, 1048), 3);
    add_background_object(create_sbwallleft_2172(1136, 1040), 3);
    add_background_object(create_sbwall_2146(1152, 1040), 3);
    add_background_object(create_sbwall_2146(1280, 1040), 3);
    add_background_object(create_sbwall_2146(1408, 1040), 3);
    add_background_object(create_shipthrustermid_2088(1104, 1048), 3);
    add_background_object(create_shipthrusterfront_2085(1392, 1048), 3);
    add_background_object(create_shipbottomsail_2074(1392, 1144), 3);
    add_background_object(create_shipbottomsail_2074(1136, 1144), 3);
    add_background_object(create_sbinnercurve1_2180(-384, 1384), 3);
    add_background_object(create_sbinnercurve3_2189(-512, 1256), 3);
    add_background_object(create_sbinnercurve4_2184(-256, 1384), 3);
    add_background_object(create_sboutercurve1_2255(4544, 688), 3);
    add_background_object(create_sboutercurve2_2256(4608, 688), 3);
    add_background_object(create_sboutercurve3_2257(4544, 752), 3);
    add_background_object(create_sboutercurve4_2179(4608, 752), 3);
    add_background_object(create_sbinnercurve2_2233(-256, 1256), 3);
    add_background_object(create_sbdeck1_2148(4096, 920), 3);
    add_background_object(create_sbwall_2146(4736, 752), 3);
    add_background_object(create_sbwall_2146(4736, 816), 3);
    add_background_object(create_sbdeck1_2148(4736, 728), 3);
    add_background_object(create_sbwall_2146(-384, 1320), 3);
    add_background_object(create_sbwall_2146(-384, 1256), 3);
    add_background_object(create_sbwall_2146(4736, 560), 3);
    add_background_object(create_sbwall_2146(4480, 560), 3);
    add_background_object(create_sbwall_2146(4224, 624), 3);
    add_background_object(create_sbdeck1_2148(3968, 920), 3);
    add_background_object(create_sbdeck1_2148(4224, 920), 3);
    add_background_object(create_sbinnercurve1_2180(4608, 752), 3);
    add_background_object(create_sbinnercurve4_2184(4480, 624), 3);
    add_background_object(create_sbwall_2146(4864, 560), 3);
    add_background_object(create_sbwall_2146(4992, 560), 3);
    add_background_object(create_sbwall_2146(5120, 560), 3);
    add_background_object(create_sbwall_2146(5120, 624), 3);
    add_background_object(create_sbwall_2146(5120, 688), 3);
    add_background_object(create_sboutercurve1_2255(4928, 688), 3);
    add_background_object(create_sboutercurve2_2256(4992, 688), 3);
    add_background_object(create_sboutercurve3_2257(4928, 752), 3);
    add_background_object(create_sboutercurve4_2179(4992, 752), 3);
    add_background_object(create_sbwall_2146(4736, 496), 3);
    add_background_object(create_sbwall_2146(4608, 496), 3);
    add_background_object(create_sbwall_2146(4480, 496), 3);
    add_background_object(create_sbinnercurve3_2189(4992, 624), 3);
    add_background_object(create_sbinnercurve2_2233(4864, 752), 3);
    add_background_object(create_sbwall_2146(5120, 752), 3);
    add_background_object(create_sbdeck1_2148(4992, 880), 3);
    add_background_object(create_sbdeck1_2148(5120, 880), 3);
    add_background_object(create_sbdeck1_2148(5248, 896), 3);
    add_background_object(create_sbwall_2146(4992, 496), 3);
    add_background_object(create_sbwall_2146(4864, 496), 3);
    add_background_object(create_sbwall_2146(3968, 944), 3);
    add_background_object(create_sbwall_2146(4096, 944), 3);
    add_background_object(create_sbwall_2146(4224, 944), 3);
    add_background_object(create_sbwall_2146(4480, 880), 3);
    add_background_object(create_sbwall_2146(4608, 880), 3);
    add_background_object(create_sbwall_2146(4608, 944), 3);
    add_background_object(create_sbwall_2146(4992, 944), 3);
    add_background_object(create_sbwall_2146(5376, 880), 3);
    add_background_object(create_sbwall_2146(5376, 944), 3);
    add_background_object(create_sbdeck1_2148(5376, 880), 3);
    add_background_object(create_sbwall_2146(5120, 496), 3);
    add_background_object(create_sbwall_2146(5248, 496), 3);
    add_background_object(create_sbwall_2146(5504, 688), 3);
    add_background_object(create_sbwall_2146(5376, 432), 3);
    add_background_object(create_sbwall_2146(5248, 432), 3);
    add_background_object(create_sbwallright_2169(5200, 688), 3);
    add_background_object(create_sbwallright_2169(5232, 752), 3);
    add_background_object(create_sbwallright_2169(5200, 560), 3);
    add_background_object(create_sbwallright_2169(5232, 624), 3);
    add_background_object(create_sbwallleft_2172(5488, 688), 3);
    add_background_object(create_sbwallleft_2172(5488, 752), 3);
    add_background_object(create_sbwallleft_2172(5488, 816), 3);
    add_background_object(create_sbsigndown_2091(2840, -168), 3);
    add_background_object(create_sbwall_2146(3968, 1008), 3);
    add_background_object(create_sbwall_2146(4096, 1008), 3);
    add_background_object(create_sbwall_2146(4224, 1008), 3);
    add_background_object(create_sbrotorbladetunnel_2178(4192, 984), 3);
    add_background_object(create_sbbluecolumn_2243(-216, 1448), 3);
    add_background_object(create_sbdeck8_2171(12792, 536), 3);
    add_background_object(create_sbdeck7_2176(12912, 536), 3);
    add_background_object(create_sbwallright_2169(12792, 560), 3);
    add_background_object(create_sbwallright_2169(12776, 624), 3);
    add_background_object(create_sbwallleft_2172(12920, 560), 3);
    add_background_object(create_sbwallleft_2172(12920, 624), 3);
    add_background_object(create_sbwall_2146(12920, 752), 3);
    add_background_object(create_sbwallleft_2172(12920, 752), 3);
    add_background_object(create_sbwallright_2169(13048, 752), 3);
    add_background_object(create_sbwall_2146(12920, 880), 3);
    add_background_object(create_sbwall_2146(12792, 880), 3);
    add_background_object(create_sbwall_2146(12664, 880), 3);
    add_background_object(create_sbwallright_2169(13048, 880), 3);
    add_background_object(create_sbdeck8_2171(12984, 880), 3);
    add_background_object(create_sboutercurve4_2179(12728, 688), 3);
    add_background_object(create_sbsmallwall_2144(12664, 688), 3);
    add_background_object(create_sbwall_2146(12536, 880), 3);
    add_background_object(create_sbwall_2146(12664, 944), 3);
    add_background_object(create_sbwall_2146(12536, 944), 3);
    add_background_object(create_sbbigwall_2147(1920, 816), 3);
    add_background_object(create_sbbigwall_2147(1664, 752), 3);
    add_background_object(create_sbbigwall_2147(1280, 880), 3);
    add_background_object(create_sbdeck1_2148(8832, 856), 3);
    add_background_object(create_sbwall_2146(12408, 560), 3);
    add_background_object(create_sbdeck1_2148(12408, 536), 3);
    add_background_object(create_sbdeck1_2148(12856, 880), 3);
    add_background_object(create_sbshipfront_2152(12792, 944), 3);
    add_background_object(create_sbwall_2146(12408, 880), 3);
    add_background_object(create_sbdeck1_2148(12472, 880), 3);
    add_background_object(create_sbdeck1_2148(12600, 880), 3);
    add_background_object(create_sbdeck1_2148(12728, 880), 3);
    add_background_object(create_ship29_2084(2104, 1104), 3);
    add_background_object(create_sbwall_2146(2304, 944), 3);
    add_background_object(create_sbwall_2146(2048, 1040), 3);
    add_background_object(create_sbwall_2146(1408, 752), 3);
    add_background_object(create_sbbigwall_2147(1536, 880), 3);
    add_background_object(create_sbbigwall_2147(2176, 816), 3);
    add_background_object(create_sbwall_2146(2304, 1008), 3);
    add_background_object(create_sbdeck1_2148(1536, 728), 3);
    add_background_object(create_sbwall_2146(1792, 880), 3);
    add_background_object(create_sbwall_2146(1792, 944), 3);
    add_background_object(create_sbwall_2146(1920, 944), 3);
    add_background_object(create_sbdeck1_2148(1920, 792), 3);
    add_background_object(create_sbdeck1_2148(2048, 792), 3);
    add_background_object(create_sbbigwall_2147(2048, 944), 3);
    add_background_object(create_sbdeck7_2176(1896, 792), 3);
    add_background_object(create_sbdeck1_2148(2176, 792), 3);
    add_background_object(create_sbdeck1_2148(2432, 600), 3);
    add_background_object(create_sbwall_2146(2176, 1040), 3);
    add_background_object(create_sbwall_2146(2304, 1040), 3);
    add_background_object(create_sbdeck8_2171(1408, 664), 3);
    add_background_object(create_sbwallright_2169(1408, 688), 3);
    add_background_object(create_sbdeck1_2148(1408, 728), 3);
    add_background_object(create_sbinnercurve1_2180(2304, 688), 3);
    add_background_object(create_sbdeck11_2185(2304, 664), 3);
    add_background_object(create_sbwall_2146(2432, 624), 3);
    add_background_object(create_sbbigwall_2147(2432, 816), 3);
    add_background_object(create_sbwall_2146(2432, 688), 3);
    add_background_object(create_sbwall_2146(2432, 752), 3);
    add_background_object(create_sbbigwall_2147(2560, 688), 3);
    add_background_object(create_sbbigwall_2147(2688, 816), 3);
    add_background_object(create_sbwall_2146(2816, 688), 3);
    add_background_object(create_sbwall_2146(2816, 752), 3);
    add_background_object(create_sbwallright_2169(2560, 624), 3);
    add_background_object(create_sbdeck8_2171(2560, 600), 3);
    add_background_object(create_sbdeck1_2148(2560, 664), 3);
    add_background_object(create_sbdeck1_2148(2688, 664), 3);
    add_background_object(create_sbdeck7_2176(2536, 664), 3);
    add_background_object(create_sbbigwall_2147(2944, 624), 3);
    add_background_object(create_sbdeck8_2171(2944, 664), 3);
    add_background_object(create_sbwallleft_2172(2928, 624), 3);
    add_background_object(create_sbdeck1_2148(2816, 664), 3);
    add_background_object(create_sbdeck1_2148(2944, 600), 3);
    add_background_object(create_sbdeck7_2176(2920, 600), 3);
    add_background_object(create_sbdeck1_2148(3072, 600), 3);
    add_background_object(create_sbbigwall_2147(2944, 944), 3);
    add_background_object(create_sbdeck1_2148(3072, 920), 3);
    add_background_object(create_sbwallright_2169(2944, 752), 3);
    add_background_object(create_sbwallright_2169(2944, 816), 3);
    add_background_object(create_sbwallright_2169(2944, 880), 3);
    add_background_object(create_sbdeck1_2148(2944, 920), 3);
    add_background_object(create_sbwall_2146(3200, 624), 3);
    add_background_object(create_sbwall_2146(3200, 688), 3);
    add_background_object(create_sbdeck1_2148(3200, 600), 3);
    add_background_object(create_sbdeck8_2171(3328, 600), 3);
    add_background_object(create_sbwallright_2169(3328, 624), 3);
    add_background_object(create_sbwallright_2169(3328, 688), 3);
    add_background_object(create_ship32_2153(2488, 184), 3);
    add_background_object(create_ship34_2154(3128, 184), 3);
    add_background_object(create_ship35_2155(2584, 184), 3);
    add_background_object(create_ship36_2156(2584, 344), 3);
    add_background_object(create_ship33_2157(2488, 344), 3);
    add_background_object(create_ship37_2158(3128, 344), 3);
    add_background_object(create_quickbackdrop7_2159(2600, 344), 3);
    add_background_object(create_quickbackdrop8_2160(2600, 184), 3);
    add_background_object(create_ship35_2155(2840, 184), 3);
    add_background_object(create_ship36_2156(2840, 344), 3);
    add_background_object(create_quickbackdrop7_2159(2856, 344), 3);
    add_background_object(create_quickbackdrop8_2160(2856, 184), 3);
    add_background_object(create_ship35_2155(3112, 184), 3);
    add_background_object(create_ship36_2156(3112, 344), 3);
    add_background_object(create_blimpcable2_2135(3120, 184), 3);
    add_background_object(create_blimpcable2_2135(3136, 248), 3);
    add_background_object(create_blimpcable2_2135(3152, 312), 3);
    add_background_object(create_blimpcable2_2135(3168, 376), 3);
    add_background_object(create_blimpcable2_2135(3184, 440), 3);
    add_background_object(create_blimpcable2_2135(2592, 184), 3);
    add_background_object(create_blimpcable2_2135(2608, 248), 3);
    add_background_object(create_blimpcable2_2135(2624, 312), 3);
    add_background_object(create_blimpcable2_2135(2640, 376), 3);
    add_background_object(create_blimpcable2_2135(2656, 440), 3);
    add_background_object(create_blimpcable2_2135(2848, 184), 3);
    add_background_object(create_blimpcable2_2135(2864, 248), 3);
    add_background_object(create_blimpcable2_2135(2880, 312), 3);
    add_background_object(create_blimpcable2_2135(2896, 376), 3);
    add_background_object(create_blimpcable2_2135(2912, 440), 3);
    add_background_object(create_blimpcable2_2135(2672, 504), 3);
    add_background_object(create_blimpcable3_2143(2584, 504), 3);
    add_background_object(create_blimpcable2_2135(2928, 504), 3);
    add_background_object(create_blimpcable2_2135(3200, 504), 3);
    add_background_object(create_blimpcable3_2143(2840, 504), 3);
    add_background_object(create_blimpcable3_2143(3112, 504), 3);
    add_background_object(create_blimpcable3_2143(2584, 568), 3);
    add_background_object(create_blimpcable2_2135(2688, 568), 3);
    add_background_object(create_blimpcable3_2143(2840, 568), 3);
    add_background_object(create_sbbigwall_2147(3712, 624), 3);
    add_background_object(create_sbwallleft_2172(3568, 688), 3);
    add_background_object(create_sbwallleft_2172(3696, 560), 3);
    add_background_object(create_sbwallleft_2172(3696, 496), 3);
    add_background_object(create_sbbigwall_2147(3712, 368), 3);
    add_background_object(create_sbwallleft_2172(3696, 432), 3);
    add_background_object(create_sbwallleft_2172(3696, 368), 3);
    add_background_object(create_sbwallleft_2172(3696, 304), 3);
    add_background_object(create_sbwallleft_2172(3696, 240), 3);
    add_background_object(create_sbbigwall_2147(3584, 112), 3);
    add_background_object(create_sbwallleft_2172(3568, 176), 3);
    add_background_object(create_sbwallleft_2172(3568, 112), 3);
    add_background_object(create_sbbigwall_2147(3584, -16), 3);
    add_background_object(create_sbwallleft_2172(3568, 48), 3);
    add_background_object(create_sbwallleft_2172(3568, -16), 3);
    add_background_object(create_sbdeck7_2176(2920, 920), 3);
    add_background_object(create_sbdeck1_2148(3328, 920), 3);
    add_background_object(create_sbdeck1_2148(3200, 920), 3);
    add_background_object(create_sbbigwall_2147(3456, 944), 3);
    add_background_object(create_sbdeck1_2148(3584, 920), 3);
    add_background_object(create_sbdeck1_2148(3456, 920), 3);
    add_background_object(create_sbbigwall_2147(3712, 944), 3);
    add_background_object(create_sbbigwalltunnel_2258(6144, 240), 3);
    add_background_object(create_sbdeck1_2148(3840, 856), 3);
    add_background_object(create_sbdeck1_2148(3712, 920), 3);
    add_background_object(create_sbdeck7_2176(3560, 664), 3);
    add_background_object(create_sbwall_2146(3584, 688), 3);
    add_background_object(create_sbwall_2146(3840, 112), 3);
    add_background_object(create_sbwall_2146(3840, 176), 3);
    add_background_object(create_sbwall_2146(3840, 48), 3);
    add_background_object(create_sbwall_2146(3840, -16), 3);
    add_background_object(create_sbwallslope2_2182(3584, 624), 3);
    add_background_object(create_sbdeck10_2183(3584, 600), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3648, 984), 3);
    add_background_object(create_sbwall_2146(3840, 880), 3);
    add_background_object(create_sbdeck7_2176(3816, 856), 3);
    add_background_object(create_sbwallleft_2172(3824, 880), 3);
    add_background_object(create_sbdeck7walkthru_2167(2072, 520), 3);
    add_background_object(create_sbdeck8walkthru_2168(3072, 816), 3);
    add_background_object(create_sbdeck1walkthru_2170(2096, 520), 3);
    add_background_object(create_sbwallleft_2172(4208, 752), 3);
    add_background_object(create_sbwallleft_2172(4208, 688), 3);
    add_background_object(create_sbwallleft_2172(4208, 624), 3);
    add_background_object(create_sbwallleft_2172(4208, 560), 3);
    add_background_object(create_sbwallleft_2172(4208, 496), 3);
    add_background_object(create_sbwallright_2169(3968, 880), 3);
    add_background_object(create_sbdeck8_2171(3968, 856), 3);
    add_background_object(create_sbwallright_2169(3968, 688), 3);
    add_background_object(create_sbwallright_2169(3968, 624), 3);
    add_background_object(create_sbwallright_2169(3968, 560), 3);
    add_background_object(create_sbwallright_2169(3968, 496), 3);
    add_background_object(create_sbwallright_2169(3968, 432), 3);
    add_background_object(create_sbwallright_2169(3968, 368), 3);
    add_background_object(create_sbwallright_2169(3968, 304), 3);
    add_background_object(create_sbbigwall_2147(3968, 112), 3);
    add_background_object(create_sbbigwall_2147(3968, -16), 3);
    add_background_object(create_sbwallright_2169(3968, 240), 3);
    add_background_object(create_sbdeck8_2171(3984, 696), 3);
    add_background_object(create_sbdeck7_2176(4184, 616), 3);
    add_background_object(create_sbdeck8_2171(3984, 472), 3);
    add_background_object(create_sbbigwall_2147(4224, 48), 3);
    add_background_object(create_sbbigwall_2147(4224, -80), 3);
    add_background_object(create_sbwallleft_2172(4336, 880), 3);
    add_background_object(create_sboutercurve1_2255(4672, 304), 3);
    add_background_object(create_sboutercurve2_2256(4736, 304), 3);
    add_background_object(create_sboutercurve3_2257(4672, 368), 3);
    add_background_object(create_sboutercurve4_2179(4736, 368), 3);
    add_background_object(create_sbdeck1_2148(4608, 496), 3);
    add_background_object(create_sbwall_2146(4480, 240), 3);
    add_background_object(create_sbinnercurve1_2180(4736, 368), 3);
    add_background_object(create_sbinnercurve4_2184(4608, 240), 3);
    add_background_object(create_sbdeck11_2185(4736, 368), 3);
    add_background_object(create_sbwall_2146(4480, 368), 3);
    add_background_object(create_sbwall_2146(4480, 304), 3);
    add_background_object(create_sbdeck1_2148(4480, 496), 3);
    add_background_object(create_sbwall_2146(4224, 176), 3);
    add_background_object(create_sbwall_2146(4352, 176), 3);
    add_background_object(create_sbdeck7_2176(4328, 880), 3);
    add_background_object(create_sbdeck11_2185(4608, 752), 3);
    add_background_object(create_sbdeck1_2148(4480, 880), 3);
    add_background_object(create_sbdeck7_2176(5224, 896), 3);
    add_background_object(create_sbdeck8_2171(5376, 896), 3);
    add_background_object(create_sbdeck1_2148(4224, 496), 3);
    add_background_object(create_sbdeck1_2148(4352, 496), 3);
    add_background_object(create_sbdeck7_2176(4200, 496), 3);
    add_background_object(create_sbbigwall_2147(4480, 112), 3);
    add_background_object(create_sbbigwall_2147(4480, -16), 3);
    add_background_object(create_sbbigwall_2147(4736, -16), 3);
    add_background_object(create_sbbigwall_2147(4864, 368), 3);
    add_background_object(create_sbdeck1_2148(4992, 368), 3);
    add_background_object(create_sbwallleft_2172(4464, 240), 3);
    add_background_object(create_sbwallleft_2172(4464, 304), 3);
    add_background_object(create_sbwallleft_2172(4368, 368), 3);
    add_background_object(create_sbdeck1_2148(4352, 344), 3);
    add_background_object(create_sbdeck7_2176(4328, 344), 3);
    add_background_object(create_sbwall_2146(4352, 880), 3);
    add_background_object(create_sbdeck1_2148(4352, 880), 3);
    add_background_object(create_sbwall_2146(4352, 624), 3);
    add_background_object(create_sbwallright_2169(4592, 368), 3);
    add_background_object(create_sbwallleft_2172(5120, 752), 3);
    add_background_object(create_sbwallright_2169(6272, 240), 3);
    add_background_object(create_sbwallright_2169(6272, 304), 3);
    add_background_object(create_sbbigwall_2147(6016, 112), 3);
    add_background_object(create_sbwallleft_2172(6144, 368), 3);
    add_background_object(create_sbwallleft_2172(6144, 304), 3);
    add_background_object(create_sbwall_2146(6416, 496), 3);
    add_background_object(create_sbwallleft_2172(6144, 496), 3);
    add_background_object(create_sbbigwall_2147(5760, 112), 3);
    add_background_object(create_sbbigwall_2147(6160, 496), 3);
    add_background_object(create_sbwall_2146(6272, 880), 3);
    add_background_object(create_sbwall_2146(6144, 880), 3);
    add_background_object(create_sbdeck1_2148(6400, 344), 3);
    add_background_object(create_sbwall_2146(6272, 112), 3);
    add_background_object(create_sbwall_2146(6400, 112), 3);
    add_background_object(create_sbdeck1walkthru_2170(6016, 600), 3);
    add_background_object(create_sbdeck1walkthru_2170(5888, 600), 3);
    add_background_object(create_sbdeck7walkthru_2167(5864, 600), 3);
    add_background_object(create_sbwallleft_2172(6144, 560), 3);
    add_background_object(create_sbdeck8_2171(6144, 600), 3);
    add_background_object(create_sbwall_2146(5888, 688), 3);
    add_background_object(create_sbdeck1_2148(5888, 688), 3);
    add_background_object(create_sbwall_2146(5760, 688), 3);
    add_background_object(create_sbdeck1_2148(5760, 688), 3);
    add_background_object(create_sbwall_2146(5632, 688), 3);
    add_background_object(create_sbdeck1_2148(5632, 688), 3);
    add_background_object(create_sboutercurve2_2256(6272, 688), 3);
    add_background_object(create_sboutercurve4_2179(6272, 752), 3);
    add_background_object(create_sbbigwall_2147(5760, 752), 3);
    add_background_object(create_sbbigwall_2147(5760, 1008), 3);
    add_background_object(create_sbinnercurve4_2184(6016, 816), 3);
    add_background_object(create_sbinnercurve2_2233(6016, 944), 3);
    add_background_object(create_sbinnercurve3_2189(6272, 624), 3);
    add_background_object(create_sbwall_2146(6400, 624), 3);
    add_background_object(create_sbwall_2146(6400, 688), 3);
    add_background_object(create_sbwall_2146(6400, 752), 3);
    add_background_object(create_sbwall_2146(6400, 816), 3);
    add_background_object(create_sbwall_2146(6400, 880), 3);
    add_background_object(create_sbinnercurve1_2180(6272, 752), 3);
    add_background_object(create_sboutercurve1_2255(6080, 880), 3);
    add_background_object(create_sboutercurve3_2257(6080, 944), 3);
    add_background_object(create_sbwall_2146(6144, 944), 3);
    add_background_object(create_sbwall_2146(6272, 944), 3);
    add_background_object(create_sbbigwall_2147(6016, 688), 3);
    add_background_object(create_sbbigwall_2147(6016, 1072), 3);
    add_background_object(create_sbbigwall_2147(6272, 1072), 3);
    add_background_object(create_sbinnercurve1_2180(6528, 944), 3);
    add_background_object(create_sbwallright_2169(6512, 880), 3);
    add_background_object(create_sbwallright_2169(6512, 752), 3);
    add_background_object(create_sbwallright_2169(6512, 816), 3);
    add_background_object(create_sbwallright_2169(6512, 688), 3);
    add_background_object(create_sbbigwall_2147(6528, 1072), 3);
    add_background_object(create_sbbigwall_2147(6784, 944), 3);
    add_background_object(create_sbbigwall_2147(6784, 1072), 3);
    add_background_object(create_sbwall_2146(6656, 1008), 3);
    add_background_object(create_sbwall_2146(6656, 944), 3);
    add_background_object(create_sbdeck1_2148(6656, 920), 3);
    add_background_object(create_sboutercurve4_2179(6464, 944), 3);
    add_background_object(create_sbsmallwall_2144(6400, 944), 3);
    add_background_object(create_sbdeck1_2148(6784, 920), 3);
    add_background_object(create_sbdeck1_2148(6912, 920), 3);
    add_background_object(create_sbdeck1walkthru_2170(6912, 824), 3);
    add_background_object(create_sbdeck1walkthru_2170(6784, 824), 3);
    add_background_object(create_sbdeck7walkthru_2167(6760, 824), 3);
    add_background_object(create_sbdeck1_2148(6912, 664), 3);
    add_background_object(create_sbwallleft_2172(7024, 688), 3);
    add_background_object(create_sbwallleft_2172(7024, 752), 3);
    add_background_object(create_sbwallleft_2172(7024, 816), 3);
    add_background_object(create_sbwallleft_2172(7024, 880), 3);
    add_background_object(create_sbbigwalltunnel2_2259(7104, 688), 3);
    add_background_object(create_sbsmallwall_2144(7040, 688), 3);
    add_background_object(create_sbsmallwall_2144(7040, 752), 3);
    add_background_object(create_sbsmallwall_2144(7040, 816), 3);
    add_background_object(create_sbsmallwall_2144(7040, 880), 3);
    add_background_object(create_sbwall_2146(7296, 944), 3);
    add_background_object(create_sbwall_2146(7296, 1008), 3);
    add_background_object(create_sbbigwall_2147(7424, 752), 3);
    add_background_object(create_sbbigwall_2147(7424, 880), 3);
    add_background_object(create_sbbigwall_2147(7424, 1008), 3);
    add_background_object(create_sbwall_2146(7168, 624), 3);
    add_background_object(create_sbwallleft_2172(7152, 624), 3);
    add_background_object(create_sbwallright_2169(7280, 624), 3);
    add_background_object(create_sbwallleft_2172(7152, 688), 3);
    add_background_object(create_sbwallleft_2172(7152, 752), 3);
    add_background_object(create_sbwallright_2169(7104, 688), 3);
    add_background_object(create_sbwallright_2169(7104, 752), 3);
    add_background_object(create_sbwallleft_2172(7408, 752), 3);
    add_background_object(create_sbdeck6_2151(7040, 664), 3);
    add_background_object(create_sbdeck8walkthru_2168(7104, 664), 3);
    add_background_object(create_sbdeck1_2148(7424, 728), 3);
    add_background_object(create_sbdeck1_2148(7552, 728), 3);
    add_background_object(create_sbdeck7_2176(6888, 664), 3);
    add_background_object(create_sbwall_2146(7168, 560), 3);
    add_background_object(create_sbwallleft_2172(7152, 560), 3);
    add_background_object(create_sbwall_2146(7168, 496), 3);
    add_background_object(create_sbwallright_2169(7280, 560), 3);
    add_background_object(create_sbwallright_2169(7280, 496), 3);
    add_background_object(create_sbwallleft_2172(7152, 496), 3);
    add_background_object(create_sbbigwall_2147(7040, 368), 3);
    add_background_object(create_sbbigwall_2147(6784, 368), 3);
    add_background_object(create_sbbigwall_2147(6400, 368), 3);
    add_background_object(create_sbdeck7_2176(5480, 688), 3);
    add_background_object(create_sbdeck1_2148(5504, 688), 3);
    add_background_object(create_sbbigwall_2147(5760, -16), 3);
    add_background_object(create_sbbigwall_2147(4992, -16), 3);
    add_background_object(create_sbbigwall_2147(5504, -16), 3);
    add_background_object(create_sbbigwall_2147(6016, -16), 3);
    add_background_object(create_sbbigwall_2147(6272, -16), 3);
    add_background_object(create_sbwall_2146(5888, 1136), 3);
    add_background_object(create_sbwall_2146(5760, 1136), 3);
    add_background_object(create_sbbigwall_2147(5504, 752), 3);
    add_background_object(create_sbbigwall_2147(5504, 880), 3);
    add_background_object(create_sbbigwall_2147(4224, 688), 3);
    add_background_object(create_sbwallright_2169(4464, 752), 3);
    add_background_object(create_sbbigwall_2147(4352, 944), 3);
    add_background_object(create_sbbigwall_2147(4736, 880), 3);
    add_background_object(create_sbdeck12_2260(4864, 752), 3);
    add_background_object(create_sbwall_2146(4608, 1008), 3);
    add_background_object(create_sbwall_2146(4736, 1008), 3);
    add_background_object(create_sbwall_2146(4864, 1008), 3);
    add_background_object(create_sbwall_2146(4992, 1008), 3);
    add_background_object(create_sbbigwall_2147(5120, 944), 3);
    add_background_object(create_sbwall_2146(5376, 1008), 3);
    add_background_object(create_sbwall_2146(5504, 1008), 3);
    add_background_object(create_sbwall_2146(5632, 1008), 3);
    add_background_object(create_sbwall_2146(5632, 1072), 3);
    add_background_object(create_sbdeck8_2171(5504, 880), 3);
    add_background_object(create_sbceiling2_2149(5504, 1072), 3);
    add_background_object(create_sbceiling2_2149(5632, 1136), 3);
    add_background_object(create_sbceiling1_2181(2432, 1040), 3);
    add_background_object(create_sbbigwall_2147(2432, 944), 3);
    add_background_object(create_sbdeck1_2148(6528, 344), 3);
    add_background_object(create_sbwallright_2169(6656, 368), 3);
    add_background_object(create_sbwallright_2169(6656, 432), 3);
    add_background_object(create_sbwallleft_2172(6768, 368), 3);
    add_background_object(create_sbwallleft_2172(6768, 432), 3);
    add_background_object(create_sbdeck1_2148(6912, 344), 3);
    add_background_object(create_sbbigwall_2147(6528, 48), 3);
    add_background_object(create_sbwall_2146(6528, -16), 3);
    add_background_object(create_sbwall_2146(6656, -16), 3);
    add_background_object(create_sbbigwall_2147(6784, 48), 3);
    add_background_object(create_sbwall_2146(6784, -16), 3);
    add_background_object(create_sbwall_2146(6912, -16), 3);
    add_background_object(create_sbwall_2146(6784, 240), 3);
    add_background_object(create_sbwall_2146(6528, 240), 3);
    add_background_object(create_sbdeck1_2148(6528, 240), 3);
    add_background_object(create_sbwallright_2169(6912, 240), 3);
    add_background_object(create_sbwallleft_2172(6512, 240), 3);
    add_background_object(create_sbdeck7_2176(6504, 240), 3);
    add_background_object(create_sbdeck8_2171(6912, 240), 3);
    add_background_object(create_sbdeck1_2148(6784, 240), 3);
    add_background_object(create_sbdeck1_2148(6656, 240), 3);
    add_background_object(create_sbdeck1_2148(7040, 344), 3);
    add_background_object(create_sbdeck1_2148(7168, 344), 3);
    add_background_object(create_sbbigwall_2147(7040, 48), 3);
    add_background_object(create_sbwall_2146(7040, -16), 3);
    add_background_object(create_sbwall_2146(7168, -16), 3);
    add_background_object(create_sbwallleft_2172(6144, 432), 3);
    add_background_object(create_sbdeck6_2151(6080, 400), 3);
    add_background_object(create_sbdeck7_2176(6056, 400), 3);
    add_background_object(create_sbdeck8_2171(6288, 344), 3);
    add_background_object(create_sbwallleft_2172(6400, 368), 3);
    add_background_object(create_sbwallleft_2172(6400, 432), 3);
    add_background_object(create_sbwallleft_2172(7408, 816), 3);
    add_background_object(create_sbwallleft_2172(7408, 880), 3);
    add_background_object(create_sbwallright_2169(7280, 688), 3);
    add_background_object(create_sbwallright_2169(7232, 752), 3);
    add_background_object(create_sbwallright_2169(7232, 816), 3);
    add_background_object(create_sbwallright_2169(7232, 912), 3);
    add_background_object(create_sbbigwall_2147(7040, 944), 3);
    add_background_object(create_sbwallright_2169(7280, 432), 3);
    add_background_object(create_sbwallright_2169(7280, 368), 3);
    add_background_object(create_sbdeck8_2171(7296, 344), 3);
    add_background_object(create_sbdeck1walkthru_2170(7296, 728), 3);
    add_background_object(create_sbwall_2146(7168, 688), 3);
    add_background_object(create_sbbigwall_2147(7168, 1072), 3);
    add_background_object(create_sbwall_2146(7040, 1072), 3);
    add_background_object(create_sbwall_2146(7040, 1136), 3);
    add_background_object(create_sbceiling1_2181(7424, 1136), 3);
    add_background_object(create_sbwall_2146(6784, 304), 3);
    add_background_object(create_sbwallright_2169(6912, 304), 3);
    add_background_object(create_sbwallleft_2172(6768, 304), 3);
    add_background_object(create_sbdeck8_2171(6784, 344), 3);
    add_background_object(create_sbbigwall_2147(7552, 48), 3);
    add_background_object(create_sbwall_2146(7552, -16), 3);
    add_background_object(create_sbwall_2146(7680, -16), 3);
    add_background_object(create_sbironwall_2138(7424, 560), 3);
    add_background_object(create_sbdeck7walkthru_2167(7400, 536), 3);
    add_background_object(create_sbdeck1walkthru_2170(7424, 536), 3);
    add_background_object(create_sbdeck1walkthru_2170(7552, 536), 3);
    add_background_object(create_sbbigwall_2147(7296, 48), 3);
    add_background_object(create_sbwall_2146(7296, -16), 3);
    add_background_object(create_sbwall_2146(7424, -16), 3);
    add_background_object(create_sbbigwall_2147(7552, 176), 3);
    add_background_object(create_sbwallleft_2172(7536, 176), 3);
    add_background_object(create_sbwallleft_2172(7536, 240), 3);
    add_background_object(create_sbdeck4_2188(7680, 696), 3);
    add_background_object(create_sbdeck9_2174(7936, 632), 3);
    add_background_object(create_sbdeck3_2161(8064, 696), 3);
    add_background_object(create_sbbigwall_2147(7680, 752), 3);
    add_background_object(create_sbbigwall_2147(7680, 880), 3);
    add_background_object(create_sbbigwall_2147(7680, 1008), 3);
    add_background_object(create_sbbigwall_2147(7936, 752), 3);
    add_background_object(create_sbbigwall_2147(7936, 880), 3);
    add_background_object(create_sbwallslope4_2187(7704, 720), 3);
    add_background_object(create_sbwallslope3_2164(8064, 720), 3);
    add_background_object(create_sbwallslope2_2182(7808, 656), 3);
    add_background_object(create_sbwallslope1_2173(7936, 656), 3);
    add_background_object(create_sbwall_2146(7808, 720), 3);
    add_background_object(create_sbwall_2146(7936, 720), 3);
    add_background_object(create_sbdeck5_2162(8448, 472), 3);
    add_background_object(create_sbbigwall_2147(7808, 48), 3);
    add_background_object(create_sbwall_2146(7808, -16), 3);
    add_background_object(create_sbwall_2146(7936, -16), 3);
    add_background_object(create_sbbigwall_2147(7808, 176), 3);
    add_background_object(create_sbbigwall_2147(7808, 304), 3);
    add_background_object(create_sbwall_2146(8064, -16), 3);
    add_background_object(create_sbwall_2146(8192, -16), 3);
    add_background_object(create_sbbigwall_2147(8064, 240), 3);
    add_background_object(create_sbbigwall_2147(8192, 880), 3);
    add_background_object(create_sbbigwall_2147(8192, 1008), 3);
    add_background_object(create_sbdeck1_2148(8192, 728), 3);
    add_background_object(create_sbdeck1_2148(8192, 536), 3);
    add_background_object(create_sbwall_2146(8192, 560), 3);
    add_background_object(create_sbwallleft_2172(8192, 560), 3);
    add_background_object(create_sbwall_2146(8320, 560), 3);
    add_background_object(create_sbdeck1_2148(8320, 728), 3);
    add_background_object(create_sbdeck4_2188(8320, 504), 3);
    add_background_object(create_sbwall_2146(8448, 560), 3);
    add_background_object(create_sbwallslope4_2187(8344, 528), 3);
    add_background_object(create_sbwallslope6_2165(8448, 496), 3);
    add_background_object(create_sbwall_2146(8448, 528), 3);
    add_background_object(create_sbdeck8_2171(8448, 728), 3);
    add_background_object(create_sbbigwall_2147(8448, 880), 3);
    add_background_object(create_sbwallright_2169(8448, 752), 3);
    add_background_object(create_sbdeck1_2148(8576, 856), 3);
    add_background_object(create_sbdeck1_2148(8448, 856), 3);
    add_background_object(create_sbwall_2146(8576, 560), 3);
    add_background_object(create_sbbluecolumn_2243(5584, 496), 3);
    add_background_object(create_sbceiling1_2181(5376, 496), 3);
    add_background_object(create_sbwall_2146(5504, 432), 3);
    add_background_object(create_sbbluecolumn_2243(5584, 560), 3);
    add_background_object(create_sbbluecolumn_2243(5584, 624), 3);
    add_background_object(create_sbbluecolumn_2243(5488, 496), 3);
    add_background_object(create_sbbluecolumn_2243(5488, 560), 3);
    add_background_object(create_sbbluecolumn_2243(5488, 624), 3);
    add_background_object(create_sbbluesupportbeam2_2245(6224, 816), 3);
    add_background_object(create_sbbluesupportbeam1_2244(6144, 1008), 3);
    add_background_object(create_sbbluesupportbeam1_2244(6240, 1008), 3);
    add_background_object(create_sbbluesupportbeam2_2245(6640, 688), 3);
    add_background_object(create_sbbluesupportbeam2_2245(6656, 752), 3);
    add_background_object(create_sbbluesupportbeam2_2245(6672, 816), 3);
    add_background_object(create_sbwall_2146(5120, 432), 3);
    add_background_object(create_sbbluecolumn_2243(5200, 304), 3);
    add_background_object(create_sbwall_2146(5376, 368), 3);
    add_background_object(create_sbwall_2146(5248, 368), 3);
    add_background_object(create_sbwall_2146(5120, 368), 3);
    add_background_object(create_sbwall_2146(5568, 368), 3);
    add_background_object(create_sboutercurve1_2255(5312, 176), 3);
    add_background_object(create_sboutercurve2_2256(5376, 176), 3);
    add_background_object(create_sboutercurve3_2257(5312, 240), 3);
    add_background_object(create_sboutercurve4_2179(5376, 240), 3);
    add_background_object(create_sbdeck1_2148(5248, 368), 3);
    add_background_object(create_sbinnercurve1_2180(5376, 240), 3);
    add_background_object(create_sbinnercurve4_2184(5248, 112), 3);
    add_background_object(create_sbdeck11_2185(5376, 240), 3);
    add_background_object(create_sbwall_2146(5120, 240), 3);
    add_background_object(create_sbwallright_2169(5232, 240), 3);
    add_background_object(create_sbceiling2_2149(4992, 240), 3);
    add_background_object(create_sbbigwall_2147(4992, 112), 3);
    add_background_object(create_sbwall_2146(5568, 304), 3);
    add_background_object(create_sbwall_2146(5504, 240), 3);
    add_background_object(create_sbdeck1_2148(4864, 368), 3);
    add_background_object(create_sbwallleft_2172(5744, 176), 3);
    add_background_object(create_sbwallleft_2172(5744, 112), 3);
    add_background_object(create_sboutercurve2_2256(5632, 240), 3);
    add_background_object(create_sbdeck1_2148(5504, 240), 3);
    add_background_object(create_sbinnercurve2_2233(5696, 304), 3);
    add_background_object(create_sbsmallwall_2144(5760, 432), 3);
    add_background_object(create_sbwall_2146(5632, 432), 3);
    add_background_object(create_sbwallright_2169(5808, 432), 3);
    add_background_object(create_sbironwall_2138(2096, 544), 3);
    add_background_object(create_sbdeck1walkthru_2170(2224, 520), 3);
    add_background_object(create_sbdeck8walkthru_2168(2352, 520), 3);
    add_background_object(create_sbbigwall_2147(8704, 1008), 3);
    add_background_object(create_sbbigwall_2147(8960, 1008), 3);
    add_background_object(create_sbdeck1_2148(8704, 856), 3);
    add_background_object(create_sbinnercurve1_2180(9088, 752), 3);
    add_background_object(create_sbdeck11_2185(9088, 728), 3);
    add_background_object(create_sbwall_2146(9216, 688), 3);
    add_background_object(create_sbwallright_2169(4848, 752), 3);
    add_background_object(create_sbwallleft_2172(4736, 752), 3);
    add_background_object(create_sbwallleft_2172(2432, 624), 3);
    add_background_object(create_sbwallleft_2172(9216, 688), 3);
    add_background_object(create_sbwall_2146(9216, 624), 3);
    add_background_object(create_sbwallleft_2172(9216, 624), 3);
    add_background_object(create_sbwall_2146(9216, 560), 3);
    add_background_object(create_sbwallleft_2172(9216, 560), 3);
    add_background_object(create_sbwall_2146(9216, 496), 3);
    add_background_object(create_sbwallleft_2172(9216, 496), 3);
    add_background_object(create_sbwall_2146(9216, 432), 3);
    add_background_object(create_sbwallleft_2172(9216, 432), 3);
    add_background_object(create_sbwall_2146(9216, 368), 3);
    add_background_object(create_sbwallleft_2172(9216, 368), 3);
    add_background_object(create_sbwall_2146(9216, 304), 3);
    add_background_object(create_sbwallleft_2172(9216, 304), 3);
    add_background_object(create_sbwall_2146(9216, 240), 3);
    add_background_object(create_sbwallleft_2172(9216, 240), 3);
    add_background_object(create_sbbrokenfloor_2150(9600, 624), 3);
    add_background_object(create_sbbrokenfloor_2150(9472, 624), 3);
    add_background_object(create_sbbrokenfloor_2150(9344, 624), 3);
    add_background_object(create_sbwall_2146(7680, 304), 3);
    add_background_object(create_sbceiling2_2149(7552, 304), 3);
    add_background_object(create_sbceiling2_2149(7680, 368), 3);
    add_background_object(create_sboutercurve1_2255(9216, 176), 3);
    add_background_object(create_sboutercurve2_2256(9280, 176), 3);
    add_background_object(create_sbinnercurve2_2233(9344, 1008), 3);
    add_background_object(create_sbbigwall_2147(9344, 1136), 3);
    add_background_object(create_sbwall_2146(9216, 880), 3);
    add_background_object(create_sbwall_2146(9216, 816), 3);
    add_background_object(create_sbwall_2146(9216, 752), 3);
    add_background_object(create_sbwall_2146(9216, 1072), 3);
    add_background_object(create_sbwall_2146(9216, 1008), 3);
    add_background_object(create_sbwall_2146(9216, 944), 3);
    add_background_object(create_sbbigwall_2147(9088, 1136), 3);
    add_background_object(create_sbwall_2146(8960, 1136), 3);
    add_background_object(create_sbceiling2_2149(8832, 1136), 3);
    add_background_object(create_sbceiling2_2149(8960, 1200), 3);
    add_background_object(create_sbwallright_2169(9328, 240), 3);
    add_background_object(create_sbwallright_2169(9328, 304), 3);
    add_background_object(create_sbwallright_2169(9328, 368), 3);
    add_background_object(create_sbwallright_2169(9328, 432), 3);
    add_background_object(create_sbwallright_2169(9328, 496), 3);
    add_background_object(create_sbwallright_2169(9328, 560), 3);
    add_background_object(create_sbwallright_2169(9328, 624), 3);
    add_background_object(create_sbwallright_2169(9328, 688), 3);
    add_background_object(create_sbwallright_2169(9328, 752), 3);
    add_background_object(create_sbwallright_2169(9328, 816), 3);
    add_background_object(create_sbwallright_2169(9328, 880), 3);
    add_background_object(create_sbwallright_2169(9328, 944), 3);
    add_background_object(create_sbinnercurve1_2180(9600, 1008), 3);
    add_background_object(create_sbwall_2146(9728, 688), 3);
    add_background_object(create_sbwallleft_2172(9728, 688), 3);
    add_background_object(create_sbwall_2146(9728, 624), 3);
    add_background_object(create_sbwallleft_2172(9728, 624), 3);
    add_background_object(create_sbwall_2146(9728, 560), 3);
    add_background_object(create_sbwallleft_2172(9728, 560), 3);
    add_background_object(create_sbwall_2146(9728, 496), 3);
    add_background_object(create_sbwallleft_2172(9728, 496), 3);
    add_background_object(create_sbwall_2146(9728, 432), 3);
    add_background_object(create_sbwallleft_2172(9728, 432), 3);
    add_background_object(create_sbwall_2146(9728, 368), 3);
    add_background_object(create_sbwallleft_2172(9728, 368), 3);
    add_background_object(create_sbwall_2146(9728, 304), 3);
    add_background_object(create_sbwallleft_2172(9728, 304), 3);
    add_background_object(create_sbwall_2146(9728, 240), 3);
    add_background_object(create_sbwallleft_2172(9728, 240), 3);
    add_background_object(create_sboutercurve1_2255(9728, 176), 3);
    add_background_object(create_sboutercurve2_2256(9792, 176), 3);
    add_background_object(create_sbinnercurve2_2233(9856, 1008), 3);
    add_background_object(create_sbbigwall_2147(9856, 1136), 3);
    add_background_object(create_sbwall_2146(9728, 880), 3);
    add_background_object(create_sbwall_2146(9728, 816), 3);
    add_background_object(create_sbwall_2146(9728, 752), 3);
    add_background_object(create_sbwall_2146(9728, 1072), 3);
    add_background_object(create_sbwall_2146(9728, 1008), 3);
    add_background_object(create_sbwall_2146(9728, 944), 3);
    add_background_object(create_sbbigwall_2147(9600, 1136), 3);
    add_background_object(create_sbwallright_2169(9840, 240), 3);
    add_background_object(create_sbwallright_2169(9840, 304), 3);
    add_background_object(create_sbwallright_2169(9840, 368), 3);
    add_background_object(create_sbwallright_2169(9840, 432), 3);
    add_background_object(create_sbwallright_2169(9840, 496), 3);
    add_background_object(create_sbwallright_2169(9840, 560), 3);
    add_background_object(create_sbwallright_2169(9840, 624), 3);
    add_background_object(create_sbwallright_2169(9840, 688), 3);
    add_background_object(create_sbwallright_2169(9840, 752), 3);
    add_background_object(create_sbwallright_2169(9840, 816), 3);
    add_background_object(create_sbwallright_2169(9840, 880), 3);
    add_background_object(create_sbwallright_2169(9840, 944), 3);
    add_background_object(create_sbwall_2146(9472, 560), 3);
    add_background_object(create_sbwall_2146(9472, 496), 3);
    add_background_object(create_sbwallleft_2172(9472, 496), 3);
    add_background_object(create_sbwallright_2169(9584, 496), 3);
    add_background_object(create_sbwallleft_2172(9472, 560), 3);
    add_background_object(create_sbwallright_2169(9584, 560), 3);
    add_background_object(create_sbwall_2146(9472, 432), 3);
    add_background_object(create_sbwall_2146(9472, 368), 3);
    add_background_object(create_sbwallleft_2172(9472, 368), 3);
    add_background_object(create_sbwallright_2169(9584, 368), 3);
    add_background_object(create_sbwallleft_2172(9472, 432), 3);
    add_background_object(create_sbwallright_2169(9584, 432), 3);
    add_background_object(create_sbwall_2146(9472, 304), 3);
    add_background_object(create_sbwall_2146(9472, 240), 3);
    add_background_object(create_sbwallleft_2172(9472, 240), 3);
    add_background_object(create_sbwallright_2169(9584, 240), 3);
    add_background_object(create_sbwallleft_2172(9472, 304), 3);
    add_background_object(create_sbwallright_2169(9584, 304), 3);
    add_background_object(create_sbwall_2146(9472, 176), 3);
    add_background_object(create_sbwall_2146(9472, 112), 3);
    add_background_object(create_sbwallleft_2172(9472, 176), 3);
    add_background_object(create_sbwallright_2169(9584, 176), 3);
    add_background_object(create_sbwall_2146(9472, 48), 3);
    add_background_object(create_sbwall_2146(9472, -16), 3);
    add_background_object(create_sbwall_2146(9344, -16), 3);
    add_background_object(create_sbwall_2146(9600, -16), 3);
    add_background_object(create_ship28_2075(9888, 1280), 3);
    add_background_object(create_ship28_2075(9928, 1264), 3);
    add_background_object(create_shipbottomsail_2074(9216, 1368), 3);
    add_background_object(create_shipbottomsail_2074(9512, 1328), 3);
    add_background_object(create_shipbottomsail_2074(9592, 1304), 3);
    add_background_object(create_shipbottomsail_2074(9280, 1344), 3);
    add_background_object(create_shipbottomsail_2074(9024, 1344), 3);
    add_background_object(create_shipbottomsail_2074(9336, 1304), 3);
    add_background_object(create_ship26_2082(9088, 1432), 3);
    add_background_object(create_ship26_2082(9152, 1424), 3);
    add_background_object(create_ship26_2082(9216, 1416), 3);
    add_background_object(create_ship26_2082(9280, 1408), 3);
    add_background_object(create_ship26_2082(9344, 1400), 3);
    add_background_object(create_ship26_2082(9408, 1392), 3);
    add_background_object(create_ship26_2082(9472, 1384), 3);
    add_background_object(create_ship28_2075(9768, 1328), 3);
    add_background_object(create_ship27_2083(9536, 1368), 3);
    add_background_object(create_ship28_2075(9808, 1312), 3);
    add_background_object(create_ship28_2075(9848, 1296), 3);
    add_background_object(create_ship26_2082(9024, 1440), 3);
    add_background_object(create_shipthrusterfront_2085(9280, 1376), 3);
    add_background_object(create_shipthrusterend_2086(8896, 1376), 3);
    add_background_object(create_shipthrustermid_2088(8992, 1376), 3);
    add_background_object(create_shipbottomsailshadow_2089(9224, 1264), 3);
    add_background_object(create_shipthrusterend_2086(8896, 1208), 3);
    add_background_object(create_shipthrustermid_2088(8992, 1208), 3);
    add_background_object(create_shipthrusterfront_2085(9280, 1208), 3);
    add_background_object(create_shipbottomsail_2074(9280, 1304), 3);
    add_background_object(create_shipbottomsail_2074(9024, 1304), 3);
    add_background_object(create_ship29_2084(9992, 1264), 3);
    add_background_object(create_sbbrokenfloor_2150(9600, 688), 3);
    add_background_object(create_sbbrokenfloor_2150(9472, 688), 3);
    add_background_object(create_sbbrokenfloor_2150(9344, 688), 3);
    add_background_object(create_sbbrokenfloor_2150(9600, 752), 3);
    add_background_object(create_sbbrokenfloor_2150(9472, 752), 3);
    add_background_object(create_sbbrokenfloor_2150(9344, 752), 3);
    add_background_object(create_sbbrokenfloor_2150(9600, 816), 3);
    add_background_object(create_sbbrokenfloor_2150(9472, 816), 3);
    add_background_object(create_sbbrokenfloor_2150(9344, 816), 3);
    add_background_object(create_sbwallleft_2172(9728, 816), 3);
    add_background_object(create_sbwallleft_2172(9728, 752), 3);
    add_background_object(create_sbwallleft_2172(9728, 944), 3);
    add_background_object(create_sbwallleft_2172(9728, 880), 3);
    add_background_object(create_sbwall_2146(9984, 560), 3);
    add_background_object(create_sbwall_2146(9984, 496), 3);
    add_background_object(create_sbwallleft_2172(9984, 496), 3);
    add_background_object(create_sbwallright_2169(10096, 496), 3);
    add_background_object(create_sbwallleft_2172(9984, 560), 3);
    add_background_object(create_sbwallright_2169(10096, 560), 3);
    add_background_object(create_sbwall_2146(9984, 432), 3);
    add_background_object(create_sbwall_2146(9984, 368), 3);
    add_background_object(create_sbwallleft_2172(9984, 368), 3);
    add_background_object(create_sbwallleft_2172(9984, 432), 3);
    add_background_object(create_sbwall_2146(9984, 304), 3);
    add_background_object(create_sbwall_2146(9984, 240), 3);
    add_background_object(create_sbwallleft_2172(9984, 240), 3);
    add_background_object(create_sbwallleft_2172(9984, 304), 3);
    add_background_object(create_sbwall_2146(9984, 176), 3);
    add_background_object(create_sbwall_2146(9984, 112), 3);
    add_background_object(create_sbwallleft_2172(9984, 176), 3);
    add_background_object(create_sbwall_2146(9984, 48), 3);
    add_background_object(create_sbwall_2146(9984, -16), 3);
    add_background_object(create_sbwall_2146(9856, -16), 3);
    add_background_object(create_sbwall_2146(10112, 368), 3);
    add_background_object(create_sbceiling1_2181(10112, 432), 3);
    add_background_object(create_sbceiling1_2181(10240, 368), 3);
    add_background_object(create_sbwall_2146(9728, -16), 3);
    add_background_object(create_sbinnercurve4_2184(9600, 48), 3);
    add_background_object(create_sbinnercurve3_2189(9856, 48), 3);
    add_background_object(create_sbinnercurve3_2189(9344, 48), 3);
    add_background_object(create_sboutercurve3_2257(9472, 624), 3);
    add_background_object(create_sboutercurve4_2179(9536, 624), 3);
    add_background_object(create_sbdeck7_2176(9512, 976), 3);
    add_background_object(create_sbdeck8_2171(9536, 976), 3);
    add_background_object(create_sboutercurve2_2256(8896, 496), 3);
    add_background_object(create_sbdeck8_2171(8576, 472), 3);
    add_background_object(create_sbwall_2146(8832, 560), 3);
    add_background_object(create_sbsmallwall_2144(8832, 496), 3);
    add_background_object(create_sbwall_2146(8704, 560), 3);
    add_background_object(create_sbwall_2146(8704, 496), 3);
    add_background_object(create_sbwallright_2169(8944, 560), 3);
    add_background_object(create_sbwall_2146(9088, 880), 3);
    add_background_object(create_sbwall_2146(8960, 880), 3);
    add_background_object(create_sbwall_2146(8960, 944), 3);
    add_background_object(create_sbwall_2146(9088, 944), 3);
    add_background_object(create_sbwall_2146(8920, 864), 3);
    add_background_object(create_sbwall_2146(9216, -16), 3);
    add_background_object(create_sbwall_2146(9088, -16), 3);
    add_background_object(create_sbwall_2146(8960, -16), 3);
    add_background_object(create_sbbigwall_2147(8704, -16), 3);
    add_background_object(create_sbwall_2146(8704, 240), 3);
    add_background_object(create_sbwall_2146(8832, 240), 3);
    add_background_object(create_sbwallright_2169(9088, 240), 3);
    add_background_object(create_sbwallleft_2172(8560, 240), 3);
    add_background_object(create_sbwallleft_2172(8560, 112), 3);
    add_background_object(create_sbwallleft_2172(8560, 48), 3);
    add_background_object(create_sbwallleft_2172(8560, -16), 3);
    add_background_object(create_sbbigwall_2147(10112, 1136), 3);
    add_background_object(create_sbwall_2146(10240, 944), 3);
    add_background_object(create_sbwall_2146(10240, 880), 3);
    add_background_object(create_sbwall_2146(10240, 816), 3);
    add_background_object(create_sbwall_2146(10240, 752), 3);
    add_background_object(create_sbinnercurve1_2180(10112, 1008), 3);
    add_background_object(create_sbwallleft_2172(10240, 816), 3);
    add_background_object(create_sbwallleft_2172(10240, 752), 3);
    add_background_object(create_sbwallleft_2172(10240, 944), 3);
    add_background_object(create_sbwallleft_2172(10240, 880), 3);
    add_background_object(create_sbdeck1_2148(10240, 728), 3);
    add_background_object(create_sbbigwall_2147(10368, 1136), 3);
    add_background_object(create_sbbigwall_2147(10240, 1008), 3);
    add_background_object(create_sbbigwall_2147(10368, 880), 3);
    add_background_object(create_sbwall_2146(10496, 1072), 3);
    add_background_object(create_sbwall_2146(10496, 1008), 3);
    add_background_object(create_sbbigwall_2147(10368, 752), 3);
    add_background_object(create_sbdeck1_2148(10368, 728), 3);
    add_background_object(create_sbwall_2146(10496, 688), 3);
    add_background_object(create_sbdeck1_2148(10496, 664), 3);
    add_background_object(create_sbwallleft_2172(10480, 688), 3);
    add_background_object(create_sbdeck7_2176(10472, 664), 3);
    add_background_object(create_sbdeck1_2148(10624, 600), 3);
    add_background_object(create_sbwallleft_2172(10608, 624), 3);
    add_background_object(create_sbdeck7_2176(10600, 600), 3);
    add_background_object(create_sbwall_2146(10752, 560), 3);
    add_background_object(create_sbdeck1_2148(10752, 536), 3);
    add_background_object(create_sbwallleft_2172(10736, 560), 3);
    add_background_object(create_sbdeck7_2176(10728, 536), 3);
    add_background_object(create_sbwall_2146(10624, 240), 3);
    add_background_object(create_sbceiling1_2181(10624, 304), 3);
    add_background_object(create_sbceiling1_2181(10880, 240), 3);
    add_background_object(create_sbbigwall_2147(10112, 240), 3);
    add_background_object(create_sbbigwall_2147(10112, 112), 3);
    add_background_object(create_sbbigwall_2147(10112, -16), 3);
    add_background_object(create_sbbigwall_2147(10368, -16), 3);
    add_background_object(create_sbbigwall_2147(10368, 112), 3);
    add_background_object(create_sbbigwall_2147(10616, -16), 3);
    add_background_object(create_sbbigwall_2147(10616, 112), 3);
    add_background_object(create_sbdeck1_2148(10880, 472), 3);
    add_background_object(create_sbwallleft_2172(10864, 496), 3);
    add_background_object(create_sbdeck7_2176(10856, 472), 3);
    add_background_object(create_sbbigwall_2147(10368, 240), 3);
    add_background_object(create_sbdeck1_2148(11008, 472), 3);
    add_background_object(create_sbwall_2146(10752, 240), 3);
    add_background_object(create_sbbigwall_2147(10872, -16), 3);
    add_background_object(create_sbbigwall_2147(10872, 112), 3);
    add_background_object(create_sbbigwall_2147(10624, 624), 3);
    add_background_object(create_sbbigwall_2147(10880, 496), 3);
    add_background_object(create_sbbigwall_2147(10880, 624), 3);
    add_background_object(create_sbbigwall_2147(10624, 752), 3);
    add_background_object(create_sbbigwall_2147(10880, 752), 3);
    add_background_object(create_sbbigwall_2147(10624, 880), 3);
    add_background_object(create_sbbigwall_2147(10880, 880), 3);
    add_background_object(create_sbdeck1_2148(11136, 472), 3);
    add_background_object(create_sbdeck1_2148(11264, 472), 3);
    add_background_object(create_sbbigwall_2147(11136, 496), 3);
    add_background_object(create_sbbigwall_2147(11128, -16), 3);
    add_background_object(create_sbbigwall_2147(11128, 112), 3);
    add_background_object(create_sbwall_2146(8576, 496), 3);
    add_background_object(create_sbwallright_2169(8320, 304), 3);
    add_background_object(create_sbwallright_2169(8320, 368), 3);
    add_background_object(create_sbwallright_2169(8320, 176), 3);
    add_background_object(create_sbwallright_2169(8320, 240), 3);
    add_background_object(create_sbwallright_2169(8320, -16), 3);
    add_background_object(create_sbwall_2146(8960, 240), 3);
    add_background_object(create_sbdeck1_2148(8960, 216), 3);
    add_background_object(create_sbdeck8_2171(9088, 216), 3);
    add_background_object(create_sbwall_2146(8576, 240), 3);
    add_background_object(create_sbwallleft_2172(8560, 176), 3);
    add_background_object(create_sbwallright_2169(8064, 112), 3);
    add_background_object(create_sbwallright_2169(8064, 48), 3);
    add_background_object(create_sbceiling1_2181(8064, 48), 3);
    add_background_object(create_sbwall_2146(8064, 176), 3);
    add_background_object(create_sbwall_2146(8192, 176), 3);
    add_background_object(create_sbwall_2146(8064, 368), 3);
    add_background_object(create_sbwall_2146(8192, 368), 3);
    add_background_object(create_sbwall_2146(8192, 752), 3);
    add_background_object(create_sbwall_2146(8192, 816), 3);
    add_background_object(create_sbwall_2146(8320, 752), 3);
    add_background_object(create_sbdeck1_2148(8320, 856), 3);
    add_background_object(create_sbceiling1_2181(9088, 48), 3);
    add_background_object(create_sbwall_2146(8960, 48), 3);
    add_background_object(create_sbwall_2146(8576, 176), 3);
    add_background_object(create_sbwall_2146(8576, 112), 3);
    add_background_object(create_sbdeck1_2148(8832, 216), 3);
    add_background_object(create_sbwallright_2169(8704, 112), 3);
    add_background_object(create_sbwall_2146(8576, 48), 3);
    add_background_object(create_sbwall_2146(8576, -16), 3);
    add_background_object(create_sbdeck1_2148(8704, 216), 3);
    add_background_object(create_sbwallright_2169(8704, 176), 3);
    add_background_object(create_sbceiling1_2181(8704, 112), 3);
    add_background_object(create_sbbigwall_2147(11136, 752), 3);
    add_background_object(create_sbbigwall_2147(11384, -48), 3);
    add_background_object(create_sbbigwall_2147(11384, 80), 3);
    add_background_object(create_sbbigwall_2147(11640, -16), 3);
    add_background_object(create_sbbigwall_2147(11640, 112), 3);
    add_background_object(create_sbbigwall_2147(12152, -16), 3);
    add_background_object(create_sbbigwall_2147(12280, 112), 3);
    add_background_object(create_sbwall_2146(12280, 560), 3);
    add_background_object(create_sbwall_2146(12280, 624), 3);
    add_background_object(create_sbwall_2146(12280, 688), 3);
    add_background_object(create_sbwall_2146(12280, 368), 3);
    add_background_object(create_sbwall_2146(12280, 432), 3);
    add_background_object(create_sbwall_2146(12280, 496), 3);
    add_background_object(create_sbwall_2146(12408, 240), 3);
    add_background_object(create_sbwall_2146(12280, 304), 3);
    add_background_object(create_sbwallright_2169(12408, 496), 3);
    add_background_object(create_sbwallright_2169(12408, 432), 3);
    add_background_object(create_sbwallright_2169(12408, 368), 3);
    add_background_object(create_sbwallright_2169(12408, 304), 3);
    add_background_object(create_sbwallright_2169(12536, 240), 3);
    add_background_object(create_sbwallright_2169(12536, 176), 3);
    add_background_object(create_sbwallright_2169(12536, 112), 3);
    add_background_object(create_sbwallright_2169(12536, 48), 3);
    add_background_object(create_sbwallright_2169(12536, -16), 3);
    add_background_object(create_sbbigwall_2147(11896, -16), 3);
    add_background_object(create_sbbigwall_2147(11896, 112), 3);
    add_background_object(create_sbwallleft_2172(12280, 624), 3);
    add_background_object(create_sbwallleft_2172(12280, 688), 3);
    add_background_object(create_sbwall_2146(12280, 880), 3);
    add_background_object(create_sbdeck1_2148(12344, 880), 3);
    add_background_object(create_sbinnercurve1_2180(12152, 944), 3);
    add_background_object(create_sbwallleft_2172(12280, 880), 3);
    add_background_object(create_sbdeck7_2176(12320, 880), 3);
    add_background_object(create_sbceiling1_2181(12536, 1008), 3);
    add_background_object(create_sbceiling1_2181(12408, 1072), 3);
    add_background_object(create_sbceiling1_2181(12280, 1136), 3);
    add_background_object(create_sbwall_2146(12152, 1072), 3);
    add_background_object(create_sbwall_2146(12152, 1136), 3);
    add_background_object(create_sbdeck11_2185(12152, 920), 3);
    add_background_object(create_sbdeck1_2148(12024, 1048), 3);
    add_background_object(create_sbdeck1_2148(11896, 1048), 3);
    add_background_object(create_sbwall_2146(11768, 1072), 3);
    add_background_object(create_sbwall_2146(11768, 1136), 3);
    add_background_object(create_sbwall_2146(11640, 1072), 3);
    add_background_object(create_sbwall_2146(11640, 1136), 3);
    add_background_object(create_sbdeck1_2148(11768, 1048), 3);
    add_background_object(create_sbdeck1_2148(11640, 1048), 3);
    add_background_object(create_sbdeck1_2148(11512, 1048), 3);
    add_background_object(create_sbdeck12_2260(11392, 920), 3);
    add_background_object(create_sbinnercurve2_2233(11392, 944), 3);
    add_background_object(create_sbbigwall_2147(11136, 1008), 3);
    add_background_object(create_sbbigwall_2147(10880, 1008), 3);
    add_background_object(create_sbbigwall_2147(10624, 1008), 3);
    add_background_object(create_sbbigwall_2147(10880, 1136), 3);
    add_background_object(create_sbbigwall_2147(10624, 1136), 3);
    add_background_object(create_sbbigwall_2147(11136, 1136), 3);
    add_background_object(create_sbbigwall_2147(11392, 1072), 3);
    add_background_object(create_sbceiling1_2181(11392, 1200), 3);
    add_background_object(create_sbwallright_2169(11376, 496), 3);
    add_background_object(create_sbwallright_2169(11376, 560), 3);
    add_background_object(create_sbwallright_2169(11376, 624), 3);
    add_background_object(create_sbwallright_2169(11376, 688), 3);
    add_background_object(create_sbwallright_2169(11376, 752), 3);
    add_background_object(create_sbwallright_2169(11376, 816), 3);
    add_background_object(create_sbwallright_2169(11376, 880), 3);
    add_background_object(create_sbbigwall_2147(11768, 240), 3);
    add_background_object(create_sbbigwall_2147(11640, 368), 3);
    add_background_object(create_sbbigwall_2147(11768, 496), 3);
    add_background_object(create_sbwall_2146(11896, 368), 3);
    add_background_object(create_sbwall_2146(11896, 432), 3);
    add_background_object(create_sbwall_2146(11640, 240), 3);
    add_background_object(create_sbwall_2146(11640, 304), 3);
    add_background_object(create_sbwall_2146(11640, 496), 3);
    add_background_object(create_sbwall_2146(11640, 560), 3);
    add_background_object(create_sbbigwall_2147(12024, 304), 3);
    add_background_object(create_sbinnercurve4_2184(12024, 496), 3);
    add_background_object(create_sbwall_2146(12024, 432), 3);
    add_background_object(create_sbwall_2146(12152, 432), 3);
    add_background_object(create_sbinnercurve3_2189(12152, 496), 3);
    add_background_object(create_sbinnercurve3_2189(11512, 208), 3);
    add_background_object(create_sbwall_2146(11640, 624), 3);
    add_background_object(create_sbwall_2146(11768, 624), 3);
    add_background_object(create_sbwall_2146(11896, 624), 3);
    add_background_object(create_sbwallright_2169(12008, 624), 3);
    add_background_object(create_sbwallleft_2172(11640, 624), 3);
    add_background_object(create_sbdeck6_2151(11456, 472), 3);
    add_background_object(create_sbdeck11_2185(11512, 344), 3);
    add_background_object(create_sbinnercurve1_2180(11512, 368), 3);
    add_background_object(create_sbinnercurve3_2189(11512, 496), 3);
    add_background_object(create_sbwall_2146(12024, 240), 3);
    add_background_object(create_sbwall_2146(12152, 240), 3);
    add_background_object(create_sbwall_2146(12536, 944), 3);
    add_background_object(create_sbwall_2146(12280, 1072), 3);
    add_background_object(create_sbbigwall_2147(12408, 624), 3);
    add_background_object(create_sbbigwall_2147(12280, 944), 3);
    add_background_object(create_sbbigwall_2147(11896, 1072), 3);
    add_background_object(create_sbsmallwall_2144(6608, 560), 3);
    add_background_object(create_sbwallright_2169(6656, 560), 3);
    add_background_object(create_sbwallleft_2172(6608, 560), 3);
    add_background_object(create_sbwall_2146(6544, 496), 3);
    add_background_object(create_sbwallright_2169(6656, 496), 3);
    add_background_object(create_sbwallright_2169(6512, 624), 3);
    add_background_object(create_sbwallright_2169(6416, 560), 3);
    add_background_object(create_sbdeck6_2151(6448, 616), 3);
    add_background_object(create_sbdeck8_2171(6512, 616), 3);
    add_background_object(create_sbdeck7_2176(6424, 616), 3);
    add_background_object(create_sbmetaltube1_2190(3928, -112), 3);
    add_background_object(create_sbmetaltube3_2192(3928, -80), 3);
    add_background_object(create_sbmetaltube2_2191(3896, -80), 3);
    add_background_object(create_sbbigwall2_2145(3712, 240), 3);
    add_background_object(create_sbbigwall2_2145(3712, 496), 3);
    add_background_object(create_sbmetaltube1_2190(4336, 368), 3);
    add_background_object(create_sbmetaltube1_2190(4336, 400), 3);
    add_background_object(create_sbmetaltube1_2190(5528, 304), 3);
    add_background_object(create_sbmetaltube1_2190(5528, 336), 3);
    add_background_object(create_sbmetaltube1_2190(5528, 368), 3);
    add_background_object(create_sbwallright_2169(5512, 304), 3);
    add_background_object(create_sbwallleft_2172(5560, 304), 3);
    add_background_object(create_sbwallright_2169(5512, 368), 3);
    add_background_object(create_sbwallleft_2172(5560, 368), 3);
    add_background_object(create_sbmetaltube3_2192(5528, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5496, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5464, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5432, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5400, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5368, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5336, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5304, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5272, 400), 3);
    add_background_object(create_sbmetaltube2_2191(5248, 400), 3);
    add_background_object(create_sbwallright_2169(5232, 368), 3);
    add_background_object(create_sbdeck1_2148(5120, 368), 3);
    add_background_object(create_sbbigwall2_2145(5760, 880), 3);
    add_background_object(create_sbdeck1_2148(6016, 688), 3);
    add_background_object(create_sbdeck1_2148(6144, 688), 3);
    add_background_object(create_sbwallright_2169(8448, 880), 3);
    add_background_object(create_sbbigwall2_2145(2688, 944), 3);
    add_background_object(create_sbbigwall2_2145(3200, 944), 3);
    add_background_object(create_sbmetaltube1_2190(5216, 688), 3);
    add_background_object(create_sbmetaltube1_2190(5216, 720), 3);
    add_background_object(create_sbmetaltube1_2190(5216, 560), 3);
    add_background_object(create_sbmetaltube1_2190(5216, 592), 3);
    add_background_object(create_sbbigwall2_2145(8704, 880), 3);
    add_background_object(create_sbbigwall2_2145(8448, 1008), 3);
    add_background_object(create_sbbigwall2_2145(7936, 1008), 3);
    add_background_object(create_sbladder_2177(12880, 752), 3);
    add_background_object(create_sbladder_2177(12880, 784), 3);
    add_background_object(create_sbladder_2177(6528, 616), 3);
    add_background_object(create_sbladder_2177(6528, 648), 3);
    add_background_object(create_sbladder_2177(6528, 680), 3);
    add_background_object(create_sbladder_2177(6528, 712), 3);
    add_background_object(create_sbladder_2177(6528, 744), 3);
    add_background_object(create_sbladder_2177(6528, 776), 3);
    add_background_object(create_sbladder_2177(6528, 808), 3);
    add_background_object(create_sbwallleft_2172(10480, 752), 3);
    add_background_object(create_sbwallright_2169(10400, 752), 3);
    add_background_object(create_sbwall_2146(12280, 240), 3);
    add_background_object(create_sbwall_2146(12152, 176), 3);
    add_background_object(create_sbwall_2146(12152, 112), 3);
    add_background_object(create_sbwall_2146(12408, 48), 3);
    add_background_object(create_sbwall_2146(12408, -16), 3);
    add_background_object(create_sbwallshadow_2142(12424, 304), 3);
    add_background_object(create_sbwallshadow_2142(2096, 544), 3);
    add_background_object(create_sbwallshadow_2142(2224, 544), 3);
    add_background_object(create_sbwallshadow_2142(2960, 840), 3);
    add_background_object(create_sbwallshadow_2142(5888, 624), 3);
    add_background_object(create_sbwallshadow_2142(6016, 624), 3);
    add_background_object(create_sbwallshadow_2142(6272, 176), 3);
    add_background_object(create_sbwallright_2169(6272, 176), 3);
    add_background_object(create_sbwallshadow_2142(7424, 560), 3);
    add_background_object(create_sbwallshadow_2142(7552, 560), 3);
    add_background_object(create_sbsmallwall_2144(4608, 560), 3);
    add_background_object(create_sbwallleft_2172(4736, 560), 3);
    add_background_object(create_sbwallright_2169(4656, 560), 3);
    add_background_object(create_sbhangingbar_2261(4672, 560), 3);
    add_background_object(create_sbwall_2146(4864, 176), 3);
    add_background_object(create_sbwall_2146(4864, 112), 3);
    add_background_object(create_sbwall_2146(4736, 112), 3);
    add_background_object(create_sbsmallwall_2144(4736, 176), 3);
    add_background_object(create_sbwallleft_2172(4864, 176), 3);
    add_background_object(create_sbwallright_2169(4784, 176), 3);
    add_background_object(create_sbhangingbar_2261(4800, 176), 3);
    add_background_object(create_sbwall_2146(5248, 48), 3);
    add_background_object(create_sbwall_2146(5248, -16), 3);
    add_background_object(create_sbwall_2146(5376, -16), 3);
    add_background_object(create_sbsmallwall_2144(5376, 48), 3);
    add_background_object(create_sbwallleft_2172(5504, 48), 3);
    add_background_object(create_sbwallright_2169(5424, 48), 3);
    add_background_object(create_sbhangingbar_2261(5440, 48), 3);
    add_background_object(create_sbmetaltube2_2191(12632, 976), 3);
    add_background_object(create_sbmetaltube2_2191(12664, 976), 3);
    add_background_object(create_sbmetaltube2_2191(12696, 976), 3);
    add_background_object(create_sbmetaltube2_2191(12728, 976), 3);
    add_object(create_enemyspawntube_2195(10448, 852), 3);
    add_object(create_objectjumppad_530(11392, 720), 3);
    add_object(create_objectjumppad_530(11664, 1048), 3);
    add_object(create_objectjumppad_530(12280, 720), 3);
    add_object(create_objectjumppad_530(12000, 1048), 3);
    add_object(create_sbloop4_2224(11296, 472), 3);
    add_object(create_objectjumppad_530(7488, 176), 3);
    add_object(create_objectjumppad_530(7200, 176), 3);
    add_object(create_objectjumppad_530(7024, 344), 3);
    add_object(create_minibossrailing_923(12296, 832), 3);
    add_object(create_minibossrailing_923(12296, 784), 3);
    add_object(create_enemydnacannonbase_2262(1998, 755), 3);
    add_object(create_enemyrotorbladespikes_2204(4223, 952), 3);
    add_object(create_enemyrotorblade_2205(4224, 952), 3);
    add_object(create_playerstartingpoint_358(141, 469), 3);
    add_object(create_levelsbplatform1_2096(80, 552), 3);
    add_object(create_levelsbplatformflame1_2097(79, 570), 3);
    add_object(create_hazardlightningradial_2263(4608, 752), 3);
    add_object(create_hazardlightningradial_2263(4608, 752), 3);
    add_object(create_hazardlightningradial_2263(4992, 752), 3);
    add_object(create_hazardlightningradial_2263(4992, 752), 3);
    add_object(create_hazardlightningradial_2263(4992, 752), 3);
    add_object(create_enemylimiter_350(5085, 754), 3);
    add_object(create_yellowspringup_434(5248, 880), 3);
    add_object(create_yellowspringup_434(5280, 880), 3);
    add_object(create_yellowspringup_434(5312, 880), 3);
    add_object(create_yellowspringup_434(5344, 880), 3);
    add_object(create_switchdoor_2099(2936, -248), 3);
    add_object(create_switchplatform_2100(2864, -112), 3);
    add_object(create_enemylimiter_350(4357, 906), 3);
    add_object(create_enemydnacannon_2264(1999, 756), 3);
    add_object(create_effectwarning_1513(2052, 760), 3);
    add_object(create_gimmickcannonbase_2198(13032, 848), 3);
    add_object(create_gimmickcannonbase2_2203(13024, 848), 3);
    add_object(create_gimmickcannon_2199(13032, 848), 3);
    add_object(create_enemyhoppermkii_2200(3107, 568), 3);
    add_object(create_enemylimiter_350(2933, 546), 3);
    add_object(create_enemylimiter_350(2581, 610), 3);
    add_object(create_enemyspawntube_2195(4224, 964), 3);
    add_object(create_breakablefloor1_2206(-416, 1064), 3);
    add_object(create_breakablefloor2_2207(-352, 1064), 3);
    add_object(create_playerassist_2028(13192, 904), 3);
    add_object(create_levelsbplatform1_2096(304, 584), 3);
    add_object(create_levelsbplatformflame1_2097(303, 602), 3);
    add_object(create_levelsbplatform1_2096(552, 616), 3);
    add_object(create_levelsbplatformflame1_2097(551, 634), 3);
    add_object(create_levelsbplatform1_2096(784, 664), 3);
    add_object(create_levelsbplatformflame1_2097(783, 682), 3);
    add_object(create_minibossbarrier_924(12280, 832), 3);
    add_object(create_gimmickcannonbase_2198(13032, 720), 3);
    add_object(create_gimmickcannonbase2_2203(13024, 720), 3);
    add_object(create_gimmickcannon_2199(13032, 720), 3);
    add_object(create_playerassistcopilot_2219(13190, 904), 3);
    add_object(create_enemyhoppermkii_2200(1867, 696), 3);
    add_object(create_enemylimiter_350(1445, 682), 3);
    add_object(create_enemyhoppermkii_2200(1323, 632), 3);
    add_object(create_enemylimiter_350(1437, 610), 3);
    add_object(create_enemylimiter_350(1021, 610), 3);
    add_object(create_enemylimiter_350(1933, 682), 3);
    add_object(create_enemydnacannonbase_2262(2638, 627), 3);
    add_object(create_enemydnacannon_2264(2639, 628), 3);
    add_object(create_effectwarning_1513(2692, 632), 3);
    add_object(create_objectcrystal_279(3677, 258), 3);
    add_object(create_objectcrystal_279(3645, 258), 3);
    add_object(create_objectcrystal_279(3645, 290), 3);
    add_object(create_objectcrystal_279(3677, 290), 3);
    add_object(create_objectcrystal_279(3661, 274), 3);
    add_object(create_objectpetal_302(3585, 641), 3);
    add_object(create_objectpetal_302(3633, 617), 3);
    add_object(create_objectpetal_302(3681, 593), 3);
    add_object(create_enemyrotorbladespikes_2204(3679, 952), 3);
    add_object(create_enemyrotorblade_2205(3680, 952), 3);
    add_object(create_enemyspawntube_2195(3680, 964), 3);
    add_object(create_enemylimiter_350(3845, 906), 3);
    add_object(create_enemylimiter_350(2965, 906), 3);
    add_object(create_shipplatform2_2094(2080, 520), 3);
    add_object(create_shipplatform2_2094(2960, 816), 3);
    add_object(create_shipplatform2_2094(2160, 520), 3);
    add_object(create_monitorrings_407(2208, 488), 3);
    add_object(create_objectcrystal_279(1813, 658), 3);
    add_object(create_objectcrystal_279(1789, 658), 3);
    add_object(create_objectcrystal_279(1765, 658), 3);
    add_object(create_objectcrystal_279(1725, 658), 3);
    add_object(create_objectcrystal_279(1701, 658), 3);
    add_object(create_objectcrystal_279(1677, 658), 3);
    add_object(create_objectcrystal_279(1637, 658), 3);
    add_object(create_objectcrystal_279(1613, 658), 3);
    add_object(create_objectcrystal_279(1589, 658), 3);
    add_object(create_enemylimiter_350(3989, 906), 3);
    add_object(create_yellowspringupleft_432(4176, 784), 3);
    add_object(create_yellowspringupright_433(3984, 664), 3);
    add_object(create_yellowspringupleft_432(4176, 584), 3);
    add_object(create_yellowspringupright_433(3984, 440), 3);
    add_object(create_hazardlightningradial_2263(4736, 368), 3);
    add_object(create_hazardlightningradial_2263(4736, 368), 3);
    add_object(create_enemydnacannonbase_2262(4390, 459), 3);
    add_object(create_enemydnacannon_2264(4391, 460), 3);
    add_object(create_enemylimiter_350(4373, 458), 3);
    add_object(create_effectwarning_1513(4444, 456), 3);
    add_object(create_hazardspikesup_2116(3728, 888), 3);
    add_object(create_hazardspikesup_2116(3760, 888), 3);
    add_object(create_hazardspikesup_2116(3792, 888), 3);
    add_object(create_hazardspikesup_2116(3568, 888), 3);
    add_object(create_hazardspikesup_2116(3600, 888), 3);
    add_object(create_yellowspringupleft_432(4176, 552), 3);
    add_object(create_yellowspringupright_433(3984, 632), 3);
    add_object(create_yellowspringupright_433(3984, 408), 3);
    add_object(create_objectcrystal_279(4037, 898), 3);
    add_object(create_objectcrystal_279(4069, 898), 3);
    add_object(create_objectcrystal_279(4101, 898), 3);
    add_object(create_objectcrystal_279(4133, 898), 3);
    add_object(create_objectcrystal_279(4005, 898), 3);
    add_object(create_hazardspikesup_2116(3184, 888), 3);
    add_object(create_hazardspikesup_2116(3152, 888), 3);
    add_object(create_hazardspikesup_2116(3248, 888), 3);
    add_object(create_hazardspikesup_2116(3216, 888), 3);
    add_object(create_levelballtunnel2_2265(6144, 240), 3);
    add_object(create_levelballtunnel3_2266(7104, 688), 3);
    add_object(create_gimmickspincuplandpoint_2267(6164, 268), 3);
    add_object(create_monitorfireshield_328(4432, 312), 3);
    add_object(create_shipplatform2_2094(6008, 600), 3);
    add_object(create_shipplatform2_2094(5880, 600), 3);
    add_object(create_shipplatform2_2094(6904, 824), 3);
    add_object(create_shipplatform2_2094(6776, 824), 3);
    add_object(create_gimmickspincuplandpoint_2267(7140, 724), 3);
    add_object(create_gimmickspincupstartpoint_2268(6972, 532), 3);
    add_object(create_objectcrystal_279(6085, 850), 3);
    add_object(create_objectcrystal_279(6061, 874), 3);
    add_object(create_objectcrystal_279(6045, 906), 3);
    add_object(create_objectcrystal_279(6389, 1042), 3);
    add_object(create_objectcrystal_279(6045, 978), 3);
    add_object(create_objectcrystal_279(6061, 1010), 3);
    add_object(create_objectcrystal_279(6085, 1034), 3);
    add_object(create_objectcrystal_279(6349, 1042), 3);
    add_object(create_objectcrystal_279(6309, 1042), 3);
    add_object(create_objectcrystal_279(6429, 1042), 3);
    add_object(create_objectcrystal_279(6469, 1042), 3);
    add_object(create_breakablefloor1_2206(6656, 344), 3);
    add_object(create_breakablefloor2_2207(6720, 344), 3);
    add_object(create_monitorbomb_563(6416, 312), 3);
    add_object(create_monitorbomb_563(6448, 312), 3);
    add_object(create_monitorbomb_563(6480, 312), 3);
    add_object(create_monitorbomb_563(6512, 312), 3);
    add_object(create_monitorbomb_563(6544, 312), 3);
    add_object(create_monitorbomb_563(6576, 312), 3);
    add_object(create_monitorbomb_563(6608, 312), 3);
    add_object(create_monitorbomb_563(6640, 312), 3);
    add_object(create_monitorbomb_563(6672, 312), 3);
    add_object(create_monitorbomb_563(6704, 312), 3);
    add_object(create_monitorbomb_563(6736, 312), 3);
    add_object(create_monitorbomb_563(6976, 312), 3);
    add_object(create_monitorbomb_563(7008, 312), 3);
    add_object(create_gimmickspincupstartpoint_2268(6092, 268), 3);
    add_object(create_gimmickspincupstartpoint_2268(6092, 300), 3);
    add_object(create_gimmickspincupstartpoint_2268(6972, 564), 3);
    add_object(create_yellowspringup_434(6368, 480), 3);
    add_object(create_yellowspringup_434(6336, 480), 3);
    add_object(create_yellowspringup_434(6304, 480), 3);
    add_object(create_yellowspringup_434(7248, 928), 3);
    add_object(create_yellowspringup_434(7280, 928), 3);
    add_object(create_yellowspringup_434(7312, 928), 3);
    add_object(create_yellowspringup_434(7344, 928), 3);
    add_object(create_yellowspringup_434(7376, 928), 3);
    add_object(create_shipplatform2_2094(7304, 728), 3);
    add_object(create_objectcrystal_279(7133, 754), 3);
    add_object(create_objectcrystal_279(7133, 794), 3);
    add_object(create_objectcrystal_279(7141, 834), 3);
    add_object(create_objectcrystal_279(7165, 866), 3);
    add_object(create_objectcrystal_279(7197, 890), 3);
    add_object(create_objectcrystal_279(7237, 898), 3);
    add_object(create_enemydnacannonbase_2262(6958, 883), 3);
    add_object(create_enemydnacannon_2264(6959, 884), 3);
    add_object(create_enemylimiter_350(6941, 882), 3);
    add_object(create_effectwarning_1513(6884, 880), 3);
    add_object(create_monitorrings_407(6992, 888), 3);
    add_object(create_pushableblock4_2269(6864, 176), 3);
    add_object(create_monitorbomb_563(7040, 312), 3);
    add_object(create_monitorbomb_563(7072, 312), 3);
    add_object(create_monitorbomb_563(7104, 312), 3);
    add_object(create_monitorbomb_563(7136, 312), 3);
    add_object(create_monitorbomb_563(7168, 312), 3);
    add_object(create_monitorbomb_563(7200, 312), 3);
    add_object(create_monitorbomb_563(7232, 312), 3);
    add_object(create_monitorbomb_563(7264, 312), 3);
    add_object(create_shipplatform2_2094(7408, 536), 3);
    add_object(create_shipplatform2_2094(7488, 536), 3);
    add_object(create_shipplatform2_2094(7552, 536), 3);
    add_object(create_active_2270(7680, 536), 3);
    add_object(create_layerchangeswitch_404(7648, 480), 3);
    add_object(create_active2_2271(7808, 568), 3);
    add_object(create_active3_2272(7808, 632), 3);
    add_object(create_active3_2272(7936, 568), 3);
    add_object(create_active4_2273(8064, 536), 3);
    add_object(create_layerchangeswitch_404(7648, 424), 3);
    add_object(create_layerchangeswitch2_1239(8192, 624), 3);
    add_object(create_layerchangeswitch2_1239(8192, 680), 3);
    add_object(create_layerchangeswitch2_1239(7688, 560), 3);
    add_object(create_layerchangeswitch2_1239(7688, 616), 3);
    add_object(create_layerchangeswitch2_1239(7688, 672), 3);
    add_object(create_layerchangeswitch_404(8208, 488), 3);
    add_object(create_layerchangeswitch_404(8208, 432), 3);
    add_object(create_hazardlightningradial_2263(5376, 240), 3);
    add_object(create_hazardlightningradial_2263(5376, 240), 3);
    add_object(create_hazardlightningradial_2263(5376, 240), 3);
    add_object(create_redspringright_441(7296, 696), 3);
    add_object(create_redspringright_441(7296, 664), 3);
    add_object(create_redspringright_441(7296, 632), 3);
    add_object(create_redspringright_441(7296, 600), 3);
    add_object(create_redspringright_441(7296, 568), 3);
    add_object(create_redspringright_441(7296, 536), 3);
    add_object(create_redspringright_441(7296, 504), 3);
    add_object(create_redspringright_441(7296, 472), 3);
    add_object(create_redspringright_441(7296, 440), 3);
    add_object(create_objectcodec_354(3026, 789), 3);
    add_object(create_objectcrystal_279(2997, 794), 3);
    add_object(create_objectcrystal_279(2973, 794), 3);
    add_object(create_objectcrystal_279(3053, 794), 3);
    add_object(create_objectcrystal_279(3077, 794), 3);
    add_object(create_objectcrystal_279(2997, 898), 3);
    add_object(create_objectcrystal_279(2973, 898), 3);
    add_object(create_objectcrystal_279(3045, 898), 3);
    add_object(create_objectcrystal_279(3069, 898), 3);
    add_object(create_objectcrystal_279(3021, 898), 3);
    add_object(create_objectcrystal_279(3093, 898), 3);
    add_object(create_objectcrystal_279(3117, 898), 3);
    add_object(create_objectcrystal_279(3141, 898), 3);
    add_object(create_shipplatform2_2094(2240, 520), 3);
    add_object(create_gimmickfan_2220(9664, 616), 3);
    add_object(create_layerchangeswitch_404(7648, 368), 3);
    add_object(create_redspringright_441(7296, 408), 3);
    add_object(create_redspringright_441(7296, 376), 3);
    add_object(create_gimmickfan_2220(9408, 616), 3);
    add_object(create_objectcrystal_279(9365, 842), 3);
    add_object(create_objectcrystal_279(9365, 882), 3);
    add_object(create_objectcrystal_279(9365, 922), 3);
    add_object(create_objectcrystal_279(9365, 962), 3);
    add_object(create_objectcrystal_279(9365, 1002), 3);
    add_object(create_objectcrystal_279(9709, 842), 3);
    add_object(create_objectcrystal_279(9709, 882), 3);
    add_object(create_objectcrystal_279(9709, 922), 3);
    add_object(create_objectcrystal_279(9709, 962), 3);
    add_object(create_objectcrystal_279(9709, 1002), 3);
    add_object(create_objectcrystal_279(9373, 1042), 3);
    add_object(create_objectcrystal_279(9701, 1042), 3);
    add_object(create_objectcrystal_279(9397, 1074), 3);
    add_object(create_objectcrystal_279(9677, 1074), 3);
    add_object(create_objectcrystal_279(9429, 1098), 3);
    add_object(create_objectcrystal_279(9645, 1098), 3);
    add_object(create_objectcrystal_279(9469, 1114), 3);
    add_object(create_objectcrystal_279(9605, 1114), 3);
    add_object(create_objectcrystal_279(9517, 1114), 3);
    add_object(create_objectcrystal_279(9557, 1114), 3);
    add_object(create_objectcrystal_279(9365, 762), 3);
    add_object(create_objectcrystal_279(9365, 802), 3);
    add_object(create_objectcrystal_279(9709, 762), 3);
    add_object(create_objectcrystal_279(9709, 802), 3);
    add_object(create_objectcrystal_279(9365, 682), 3);
    add_object(create_objectcrystal_279(9365, 722), 3);
    add_object(create_objectcrystal_279(9709, 682), 3);
    add_object(create_objectcrystal_279(9709, 722), 3);
    add_object(create_redspringupright_438(9536, 944), 3);
    add_object(create_redspringupleft_439(9504, 944), 3);
    add_object(create_sbloop2_2210(8960, 736), 3);
    add_object(create_sbloop3_2211(8880, 624), 3);
    add_object(create_sbloop3_2211(8880, 688), 3);
    add_object(create_sbloop5_2223(8896, 624), 3);
    add_object(create_sbloop5_2223(8896, 688), 3);
    add_object(create_sbloop5_2223(8896, 752), 3);
    add_object(create_sbloop5_2223(8896, 816), 3);
    add_object(create_sbloop3_2211(8880, 752), 3);
    add_object(create_sbloop3_2211(8880, 816), 3);
    add_object(create_sbloop4_2224(8856, 856), 3);
    add_object(create_enemydnacannonbase_2262(10686, 563), 3);
    add_object(create_enemydnacannon_2264(10687, 564), 3);
    add_object(create_enemylimiter_350(10669, 562), 3);
    add_object(create_effectwarning_1513(10612, 560), 3);
    add_object(create_enemydnacannonbase_2262(10822, 499), 3);
    add_object(create_enemydnacannon_2264(10823, 500), 3);
    add_object(create_enemylimiter_350(10805, 498), 3);
    add_object(create_effectwarning_1513(10748, 496), 3);
    add_object(create_enemydnacannonbase_2262(11014, 435), 3);
    add_object(create_enemydnacannon_2264(11015, 436), 3);
    add_object(create_enemylimiter_350(10997, 434), 3);
    add_object(create_effectwarning_1513(10940, 432), 3);
    add_object(create_objectpetal_302(10585, 641), 3);
    add_object(create_objectpetal_302(10545, 641), 3);
    add_object(create_objectpetal_302(10505, 641), 3);
    add_object(create_enemylimiter_350(3365, 546), 3);
    add_object(create_objectcrystal_279(8885, 474), 3);
    add_object(create_objectcrystal_279(8861, 474), 3);
    add_object(create_objectcrystal_279(8909, 474), 3);
    add_object(create_objectcrystal_279(8933, 482), 3);
    add_object(create_objectcrystal_279(8957, 498), 3);
    add_object(create_objectcrystal_279(8973, 522), 3);
    add_object(create_objectcrystal_279(8973, 554), 3);
    add_object(create_objectcrystal_279(8973, 586), 3);
    add_object(create_objectcrystal_279(8445, 706), 3);
    add_object(create_objectcrystal_279(8413, 706), 3);
    add_object(create_objectcrystal_279(8381, 706), 3);
    add_object(create_objectcrystal_279(8349, 706), 3);
    add_object(create_objectcrystal_279(8317, 706), 3);
    add_object(create_objectcrystal_279(8285, 706), 3);
    add_object(create_objectcrystal_279(8253, 706), 3);
    add_object(create_objectcodec_354(8202, 77), 3);
    add_object(create_monitorkeystone_562(8120, 144), 3);
    add_object(create_monitorkeystone_562(8080, 144), 3);
    add_object(create_redspringright_441(8320, 824), 3);
    add_object(create_objectpetal_302(8353, 833), 3);
    add_object(create_objectpetal_302(8417, 833), 3);
    add_object(create_objectfuel_528(8764, 204), 3);
    add_object(create_minibossrailing_923(12296, 760), 3);
    add_object(create_minibossbarrier_924(12280, 784), 3);
    add_object(create_minibossbarrier_924(12280, 752), 3);
    add_object(create_layerchangeswitch_404(11504, 208), 3);
    add_object(create_layerchangeto0_405(11256, 416), 3);
    add_object(create_layerchangeto0_405(11256, 360), 3);
    add_object(create_layerchangeto0_405(11256, 304), 3);
    add_object(create_layerchangeto0_405(11256, 248), 3);
    add_object(create_sbloop4_2224(11392, 472), 3);
    add_object(create_sbloop5_2223(11328, 432), 3);
    add_object(create_sbloop5_2223(11328, 368), 3);
    add_object(create_sbloop5_2223(11328, 304), 3);
    add_object(create_sbloop5_2223(11328, 240), 3);
    add_object(create_sbloop3_2211(11328, 240), 3);
    add_object(create_sbloop3_2211(11328, 304), 3);
    add_object(create_sbloop3_2211(11328, 368), 3);
    add_object(create_sbloop3_2211(11328, 432), 3);
    add_object(create_sbloop6_2225(11384, 208), 3);
    add_object(create_layerchangeto0_405(11456, 512), 3);
    add_object(create_layerchangeto0_405(11456, 576), 3);
    add_object(create_layerchangeto0_405(11456, 640), 3);
    add_object(create_layerchangeto0_405(11456, 704), 3);
    add_object(create_layerchangeto0_405(11456, 768), 3);
    add_object(create_layerchangeto0_405(11456, 832), 3);
    add_object(create_layerchangeto0_405(11456, 896), 3);
    add_object(create_layerchangeto0_405(11456, 960), 3);
    add_object(create_sbloop7_2274(11392, 496), 3);
    add_object(create_monitorrings_407(12520, 848), 3);
    add_object(create_monitorrings_407(12504, 504), 3);
    add_object(create_monitorrings_407(12536, 504), 3);
    add_object(create_objectpetal_302(12153, 513), 3);
    add_object(create_objectpetal_302(12097, 529), 3);
    add_object(create_objectpetal_302(12209, 529), 3);
    add_object(create_objectpetal_302(11513, 513), 3);
    add_object(create_objectpetal_302(11457, 529), 3);
    add_object(create_objectpetal_302(11569, 529), 3);
    add_object(create_enemydronelaser_2127(-264, 724), 3);
    add_object(create_enemyspawntube_2195(8496, 900), 3);
    add_object(create_enemydrone_2222(8496, 920), 3);
    add_object(create_levelsbplatform1_2096(2336, 232), 3);
    add_object(create_levelsbplatformflame1_2097(2335, 250), 3);
    add_object(create_objectcodec_354(2410, 189), 3);
    add_object(create_objectcrystal_279(2341, 178), 3);
    add_object(create_objectcrystal_279(2365, 162), 3);
    add_object(create_objectcrystal_279(2397, 154), 3);
    add_object(create_objectcrystal_279(2429, 154), 3);
    add_object(create_objectcrystal_279(2461, 162), 3);
    add_object(create_objectcrystal_279(2485, 178), 3);
    add_object(create_objectcrystal_279(2749, 138), 3);
    add_object(create_objectcrystal_279(2789, 138), 3);
    add_object(create_objectcrystal_279(2829, 138), 3);
    add_object(create_objectcrystal_279(2869, 138), 3);
    add_object(create_objectcrystal_279(2909, 138), 3);
    add_object(create_objectcrystal_279(2949, 138), 3);
    add_object(create_objectcrystal_279(2989, 138), 3);
    add_object(create_objectcrystal_279(3029, 138), 3);
    add_object(create_objectcrystal_279(3069, 138), 3);
    add_object(create_objectcrystal_279(3109, 138), 3);
    add_object(create_laddertop_357(12900, 775), 3);
    add_object(create_laddertop_357(6548, 639), 3);
    add_object(create_enemyspawntube_2195(10448, 772), 3);
    add_object(create_enemydrone_2222(10448, 800), 3);
    add_object(create_enemyhoppermkii_2200(5787, 656), 3);
    add_object(create_enemylimiter_350(5493, 642), 3);
    add_object(create_enemylimiter_350(6165, 642), 3);
    add_object(create_gimmickhangingidlesensor_740(4705, 584), 3);
    add_object(create_gimmickhangingidlesensor_740(4833, 200), 3);
    add_object(create_gimmickhangingidlesensor_740(5473, 72), 3);
    add_object(create_monitor1up_410(12488, 848), 3);
    add_object(create_gimmickfanside_2221(12623, 992), 3);
    add_object(create_monitorcrate_409(2176, 488), 3);
    add_object(create_monitorcrate_409(2240, 488), 3);
    add_object(create_monitorcrate_409(6432, 584), 3);
    add_object(create_guicompass_2230(12864, 480), 3);
    add_object(create_objectcodec_354(13322, 453), 3);
    add_object(create_objecttaostone_532(6715, 282), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_blimpcable1_2070(1424, 664), 4);
    add_background_object(create_blimpcable1_2070(1520, 280), 4);
    add_background_object(create_blimpcable1_2070(1504, 344), 4);
    add_background_object(create_blimpcable1_2070(1488, 408), 4);
    add_background_object(create_blimpcable1_2070(1472, 472), 4);
    add_background_object(create_blimpcable1_2070(1456, 536), 4);
    add_background_object(create_blimpcable1_2070(1440, 600), 4);
    add_background_object(create_blimpcable1_2070(1416, 696), 4);
    add_background_object(create_sbdeck8_2171(1416, 760), 4);
    add_background_object(create_blimpcable1_2070(1792, 280), 4);
    add_background_object(create_blimpcable1_2070(1776, 344), 4);
    add_background_object(create_blimpcable1_2070(1760, 408), 4);
    add_background_object(create_blimpcable1_2070(1744, 472), 4);
    add_background_object(create_blimpcable1_2070(1728, 536), 4);
    add_background_object(create_blimpcable1_2070(1712, 600), 4);
    add_background_object(create_blimpcable1_2070(1696, 664), 4);
    add_background_object(create_sbdeck8_2171(1688, 760), 4);
    add_background_object(create_blimpcable1_2070(12696, -72), 4);
    add_background_object(create_blimpcable1_2070(12680, -8), 4);
    add_background_object(create_blimpcable1_2070(12664, 56), 4);
    add_background_object(create_blimpcable1_2070(12648, 120), 4);
    add_background_object(create_blimpcable1_2070(12632, 184), 4);
    add_background_object(create_blimpcable1_2070(12616, 248), 4);
    add_background_object(create_blimpcable1_2070(12600, 312), 4);
    add_background_object(create_blimpcable1_2070(12584, 376), 4);
    add_background_object(create_blimpcable1_2070(12568, 440), 4);
    add_background_object(create_blimpcable1_2070(12552, 504), 4);
    add_background_object(create_sbdeck8_2171(12552, 568), 4);
    add_background_object(create_sbdeck7_2176(12528, 568), 4);
    add_background_object(create_sbdeck7_2176(1392, 760), 4);
    add_background_object(create_sbdeck7_2176(1664, 760), 4);
    add_background_object(create_blimpcable1_2070(12952, -72), 4);
    add_background_object(create_blimpcable1_2070(12936, -8), 4);
    add_background_object(create_blimpcable1_2070(12920, 56), 4);
    add_background_object(create_blimpcable1_2070(12904, 120), 4);
    add_background_object(create_blimpcable1_2070(12888, 184), 4);
    add_background_object(create_blimpcable1_2070(12872, 248), 4);
    add_background_object(create_blimpcable1_2070(12856, 312), 4);
    add_background_object(create_blimpcable1_2070(12840, 376), 4);
    add_background_object(create_blimpcable1_2070(12824, 440), 4);
    add_background_object(create_blimpcable1_2070(12808, 504), 4);
    add_background_object(create_sbdeck8_2171(12808, 568), 4);
    add_background_object(create_sbdeck7_2176(12784, 568), 4);
    add_background_object(create_blimpcable1_2070(13224, -72), 4);
    add_background_object(create_blimpcable1_2070(13208, -8), 4);
    add_background_object(create_blimpcable1_2070(13192, 56), 4);
    add_background_object(create_blimpcable1_2070(13176, 120), 4);
    add_background_object(create_blimpcable1_2070(13160, 184), 4);
    add_background_object(create_blimpcable1_2070(13144, 248), 4);
    add_background_object(create_blimpcable1_2070(13128, 312), 4);
    add_background_object(create_blimpcable1_2070(13112, 376), 4);
    add_background_object(create_blimpcable1_2070(13096, 440), 4);
    add_background_object(create_blimpcable1_2070(13080, 504), 4);
    add_background_object(create_sbdeck8_2171(13080, 568), 4);
    add_background_object(create_sbdeck7_2176(13056, 568), 4);
    add_background_object(create_blimpcable1_2070(1688, 696), 4);
    add_background_object(create_blimpcable1_2070(2568, 184), 4);
    add_background_object(create_blimpcable1_2070(2552, 248), 4);
    add_background_object(create_blimpcable1_2070(2536, 312), 4);
    add_background_object(create_blimpcable1_2070(2520, 376), 4);
    add_background_object(create_blimpcable1_2070(2504, 440), 4);
    add_background_object(create_blimpcable1_2070(2488, 504), 4);
    add_background_object(create_blimpcable1_2070(2824, 184), 4);
    add_background_object(create_blimpcable1_2070(2808, 248), 4);
    add_background_object(create_blimpcable1_2070(2792, 312), 4);
    add_background_object(create_blimpcable1_2070(2776, 376), 4);
    add_background_object(create_blimpcable1_2070(2760, 440), 4);
    add_background_object(create_blimpcable1_2070(2744, 504), 4);
    add_background_object(create_blimpcable1_2070(3096, 184), 4);
    add_background_object(create_blimpcable1_2070(3080, 248), 4);
    add_background_object(create_blimpcable1_2070(3064, 312), 4);
    add_background_object(create_blimpcable1_2070(3048, 376), 4);
    add_background_object(create_blimpcable1_2070(3032, 440), 4);
    add_background_object(create_blimpcable1_2070(3016, 504), 4);
    add_background_object(create_blimpcable1_2070(2472, 568), 4);
    add_background_object(create_blimpcable1_2070(2728, 568), 4);
    add_background_object(create_blimpcable1_2070(2712, 632), 4);
    add_background_object(create_blimpcable1_2070(3000, 568), 4);
    add_background_object(create_sbdeck7_2176(2448, 632), 4);
    add_background_object(create_sbdeck8_2171(2472, 632), 4);
    add_background_object(create_sbdeck7_2176(2688, 696), 4);
    add_background_object(create_sbdeck8_2171(2712, 696), 4);
    add_background_object(create_sbdeck7_2176(2976, 632), 4);
    add_background_object(create_sbdeck8_2171(3000, 632), 4);
    add_background_object(create_sbdeck1walkthru_2170(7296, 728), 4);
    add_background_object(create_sbdeck7_2176(7272, 728), 4);
    add_background_object(create_sbwallleft_2172(8880, 816), 4);
    add_background_object(create_sbwallleft_2172(8880, 752), 4);
    add_background_object(create_sbwallleft_2172(8880, 688), 4);
    add_background_object(create_sbwallleft_2172(8880, 624), 4);
    add_background_object(create_sbsmallwall_2144(8896, 624), 4);
    add_background_object(create_sbsmallwall_2144(8896, 688), 4);
    add_background_object(create_sbsmallwall_2144(8896, 752), 4);
    add_background_object(create_sbsmallwall_2144(8896, 816), 4);
    add_background_object(create_sbwallright_2169(8944, 624), 4);
    add_background_object(create_sbwallright_2169(8944, 688), 4);
    add_background_object(create_sbinnercurve2_2233(8960, 736), 4);
    add_background_object(create_sbdeck7_2176(9064, 856), 4);
    add_background_object(create_sbwallright_2169(8320, 48), 4);
    add_background_object(create_sbwallright_2169(8320, 112), 4);
    add_background_object(create_sbwallleft_2172(8304, 112), 4);
    add_background_object(create_sbwallleft_2172(8304, 48), 4);
    add_background_object(create_sbwallright_2169(8448, 816), 4);
    add_background_object(create_sbwallleft_2172(8432, 816), 4);
    add_background_object(create_sbwallright_2169(8320, 816), 4);
    add_background_object(create_sbwall_2146(8192, 816), 4);
    add_background_object(create_sbsmallwall_2144(8912, 112), 4);
    add_background_object(create_sbsmallwall_2144(8912, 176), 4);
    add_background_object(create_sbwallleft_2172(8912, 112), 4);
    add_background_object(create_sbwallleft_2172(8912, 176), 4);
    add_background_object(create_sbwallright_2169(8960, 176), 4);
    add_background_object(create_sbwallright_2169(8960, 112), 4);
    add_object(create_active3_2272(7808, 632), 4);
    add_object(create_active3_2272(7936, 568), 4);
    add_object(create_sbloop5_2223(11328, 432), 4);
    add_object(create_sbloop5_2223(11328, 368), 4);
    add_object(create_sbloop5_2223(11328, 304), 4);
    add_object(create_sbloop5_2223(11328, 240), 4);
    add_object(create_sbloop3_2211(11328, 240), 4);
    add_object(create_sbloop3_2211(11328, 304), 4);
    add_object(create_sbloop3_2211(11328, 368), 4);
    add_object(create_sbloop3_2211(11328, 432), 4);
    add_object(create_sbloop6_2225(11384, 208), 4);
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
    add_object(create_hazardspikesup_2116(-208, 392), 5);
    add_object(create_hazardspikesdown_2117(-168, 392), 5);
    add_object(create_hazardspikesleft_2118(-128, 392), 5);
    add_object(create_hazardspikesright_2119(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(11864, 1087), 5);
    add_object(create_cameralimitbossleft_421(11328, 360), 5);
    add_object(create_cameralimitbossright_422(12335, 800), 5);
    add_object(create_cameralimitbosstop_423(12768, -208), 5);
    add_object(create_cameratriggerboss_424(12456, -384), 5);
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
    add_object(create_effectsgroundspark_2025(-400, 72), 5);
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
    add_object(create_enemydnalaser_2236(-280, 680), 5);
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_37, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_37, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_37, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_37, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_37, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_37, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_37, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_37, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_37, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_37, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_37, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_37, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_37, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_37, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_37, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_37, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_37, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_37, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_37, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_37, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_37, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_37, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_37, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_37, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_37, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_37, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_37, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_37, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_37, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_37, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_37, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_37, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_37, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_37, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_37, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_37, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_37, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_37, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_37, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_37, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_37, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_37, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_37, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_37, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_37, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_37, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_37, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_37, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_37, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_37, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_37, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_37, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_37, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_37, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_1432_20 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
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
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1434_20 = loop_count;
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
    not_always_1407_37 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_satellite_1 = false;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1433_20 = loop_count;
    not_always_1033_13 = loop_count;
    not_always_1594_37 = loop_count;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    not_always_1408_37 = loop_count;
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
    not_always_1398_23 = loop_count;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1436_20 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
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
    once_condition_1828_16 = false;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    not_always_1622_37 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    once_condition_1682_26 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1619_36 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_cutscenes_fly_in_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
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
    not_always_1406_37 = loop_count;
    not_always_1621_37 = loop_count;
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
    not_always_1396_36 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    not_always_1435_20 = loop_count;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    not_always_1696_16 = loop_count;
    not_always_1415_22 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_9229()
{
    // event 1561_38
    {
        if (!(group_main_engine_1)) goto event_1561_38_end;
        enemymagnetizer_2300_instances.clear_selection();
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemymagnetizer_2300_instances.has_selection()) goto event_1561_38_end;
        FrameObject * single_instance_1561_38_0; single_instance_1561_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemymagnetizer_2300_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1561_38_0 == NULL)
                    single_instance_1561_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1561_38_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1561_38_0))->force_frame(70+((Active*)get_single(enemymagnetizer_2300_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemymagnetizer_2300_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1561_38_end: ;
}
void Frames::event_func_9230()
{
    // event 1644_38
    {
        if (!(group_main_engine_1)) goto event_1644_38_end;
        enemypelletizer_2304_instances.clear_selection();
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemypelletizer_2304_instances.has_selection()) goto event_1644_38_end;
        FrameObject * single_instance_1644_38_0; single_instance_1644_38_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypelletizer_2304_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1644_38_0 == NULL)
                    single_instance_1644_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1644_38_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1644_38_0))->force_frame(70+((Active*)get_single(enemypelletizer_2304_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemypelletizer_2304_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1644_38_end: ;
}
void Frames::loop_spawndebris_38()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_8589();
    event_func_8590();
    event_func_9229();
    event_func_8591();
    event_func_9230();
    event_func_8592();
}
void Frames::event_func_9231()
{
    // event 1421_38
    {
        if (!(group_main_engine_1)) goto event_1421_38_end;
        gimmickswingplatform_768_instances.clear_selection();
        for (ObjectIterator it(gimmickswingplatform_768_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
        gimmickswingbase_766_instances.clear_selection();
        for (ObjectIterator it(gimmickswingbase_766_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1421_38_end: ;
}
void Frames::event_func_9232()
{
    // event 1422_38
    {
        if (!(group_main_engine_1)) goto event_1422_38_end;
        gimmickswingchain_767_instances.clear_selection();
        for (ObjectIterator it(gimmickswingchain_767_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1422_38_end: ;
}
void Frames::loop_order_swing_38()
{
    event_func_9231();
    event_func_9232();
}
void Frames::event_func_9233()
{
    // event 1419_38
    {
        if (!(group_main_engine_1)) goto event_1419_38_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1419_38_end;
        FrameObject * single_instance_1419_38_0; single_instance_1419_38_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_26); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickswingchain_2276(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1419_38_0 == NULL)
                    single_instance_1419_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1419_38_0))->alterables->values.set(0, ((Active*)get_single(qualifier_26, default_active_instance))->get_x()+0.5);
        ((Active*)((Active*)single_instance_1419_38_0))->alterables->values.set(1, ((Active*)get_single(qualifier_26, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1419_38_0))->alterables->values.set(2, (loop_spawn_swing_link_index+1)*16);
        ((Active*)((Active*)single_instance_1419_38_0))->alterables->values.set(3, ((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1419_38_0))->alterables->values.set(5, 0.04-0.015*get_min(get_max(((Active*)get_single(qualifier_26, default_active_instance))->get_action_y()-((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1), 0), 1));
    }
    event_1419_38_end: ;
}
void Frames::loop_spawn_swing_link_38()
{
    event_func_9233();
}
void Frames::event_func_9234()
{
    // event 1420_38
    {
        if (!(group_main_engine_1)) goto event_1420_38_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1420_38_end;
        FrameObject * single_instance_1420_38_0; single_instance_1420_38_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_26); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickswingplatform_2277(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1420_38_0 == NULL)
                    single_instance_1420_38_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(0, ((Active*)get_single(qualifier_26, default_active_instance))->get_x()+0.5);
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(1, ((Active*)get_single(qualifier_26, default_active_instance))->get_y());
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(2, (((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(0)+1)*16);
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(3, ((Active*)get_single(qualifier_26, default_active_instance))->alterables->values.get(1));
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(5, 0.04-0.015*get_min(get_max(((Active*)get_single(qualifier_26, default_active_instance))->get_action_y()-((Active*)get_instance(masterlevel_37_instances))->alterables->values.get(1), 0), 1));
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(6, ((Active*)single_instance_1420_38_0)->alterables->values.get(2)*2*3.14159);
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(8, ((Active*)single_instance_1420_38_0)->get_x());
        ((Active*)((Active*)single_instance_1420_38_0))->alterables->values.set(9, ((Active*)single_instance_1420_38_0)->get_y());
    }
    event_1420_38_end: ;
}
void Frames::loop_spawn_swing_platform_38()
{
    event_func_9234();
}
void Frames::event_func_9235()
{
    // event 1418_38
    {
        if (!(group_main_engine_1)) goto event_1418_38_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1418_38_end;
        FrameObject * single_instance_1418_38_0; single_instance_1418_38_0 = NULL;
        // select single: true false false
        for (QualifierIterator p_it(qualifier_26); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_gimmickswingbase_2275(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1418_38_0 == NULL)
                    single_instance_1418_38_0 = new_obj;
            }
        }
    }
    event_1418_38_end: ;
}
void Frames::loop_spawn_swing_base_38()
{
    event_func_9235();
}
void Frames::event_func_9236()
{
    // event 1417_38
    {
        if (!(group_main_engine_1)) goto event_1417_38_end;
        qualifier_26.clear_selection();
        for (QualifierIterator it(qualifier_26); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) == (loop_spawn_swing_index))) { it.deselect(); continue; }
            if (((Active*)(*it))->outside_playfield()) { it.deselect(); continue; }
        }
        if (!qualifier_26.has_selection()) goto event_1417_38_end;
        {
            loop_spawn_swing_base_running = true;
            int times = int(1);
            loop_spawn_swing_base_index = 0;
            while (loop_spawn_swing_base_index < times) {
                loop_spawn_swing_base_38();
                if (!loop_spawn_swing_base_running) break;
                loop_spawn_swing_base_index++;
            }
        }
        {
            loop_spawn_swing_link_running = true;
            int times = int(((Active*)get_qualifier(qualifier_26, default_active_instance))->alterables->values.get(0));
            loop_spawn_swing_link_index = 0;
            while (loop_spawn_swing_link_index < times) {
                loop_spawn_swing_link_38();
                if (!loop_spawn_swing_link_running) break;
                loop_spawn_swing_link_index++;
            }
        }
        {
            loop_spawn_swing_platform_running = true;
            int times = int(1);
            loop_spawn_swing_platform_index = 0;
            while (loop_spawn_swing_platform_index < times) {
                loop_spawn_swing_platform_38();
                if (!loop_spawn_swing_platform_running) break;
                loop_spawn_swing_platform_index++;
            }
        }
    }
    event_1417_38_end: ;
}
void Frames::loop_spawn_swing_38()
{
    event_func_9236();
}
void Frames::loop_wrapper_sound_hurt1_38(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_38(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_38(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_38(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_38(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_38(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_38(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_38(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_38(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_38(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_38(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_38(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_38(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_38(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_38(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_38(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_38(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_38(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_38(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_play_music_6_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_sound_go0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_38(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_sound_explode3_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_38(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_38(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_38(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_9237()
{
    // event 1760_38
    {
        if (!(group_main_engine_1)) goto event_1760_38_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1760_38_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->set_x(((Active*)col_instance_2)->get_x()-12);
    }
    event_1760_38_end: ;
}
void Frames::event_func_9238()
{
    // event 1763_38
    {
        if (!(group_main_engine_1)) goto event_1763_38_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(3))) goto event_1763_38_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.disable(1);
        ((Active*)((Active*)col_instance_2))->alterables->flags.disable(2);
        ((Active*)((Active*)col_instance_2))->alterables->flags.disable(3);
        ((Active*)((Active*)col_instance_2))->set_x(((Active*)col_instance_2)->alterables->values.get(0));
        ((Active*)((Active*)col_instance_2))->set_y(((Active*)col_instance_2)->alterables->values.get(1));
    }
    event_1763_38_end: ;
}
void Frames::col_4_38()
{
    event_func_9237();
    event_func_9238();
}
void Frames::event_func_9239()
{
    // event 1484_38
    {
        if (!(group_main_engine_1)) goto event_1484_38_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(2)) == (0))) goto event_1484_38_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(2, 1);
    }
    event_1484_38_end: ;
}
void Frames::col_5_38()
{
    event_func_9239();
}
void Frames::event_func_9240()
{
    // event 1766_38
    {
        if (!(group_main_engine_1)) goto event_1766_38_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_off(2))) goto event_1766_38_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(2);
        ((Active*)((Active*)col_instance_2))->set_x(((Active*)col_instance_2)->get_x()+16);
    }
    event_1766_38_end: ;
}
void Frames::col_14_38()
{
    event_func_9240();
    event_func_9238();
}
void Frames::event_func_9241()
{
    // event 1628_38
    {
        if (!(group_main_engine_1)) goto event_1628_38_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(6))) goto event_1628_38_end;
        FrameObject * single_instance_1628_38_0; single_instance_1628_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1628_38_0 == NULL)
                single_instance_1628_38_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, -5);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_38();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1628_38_end: ;
}
void Frames::col_19_38()
{
    event_func_8608();
    event_func_8609();
    event_func_9241();
}
void Frames::event_func_9242()
{
    // event 1743_38
    {
        if (!(group_main_engine_1)) goto event_1743_38_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1743_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1743_38_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1743_38_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 5);
    }
    event_1743_38_end: ;
}
void Frames::event_func_9243()
{
    // event 1744_38
    {
        if (!(group_main_engine_1)) goto event_1744_38_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1744_38_0; single_instance_1744_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1744_38_0 == NULL)
                single_instance_1744_38_0 = new_obj;
        }
        media.stop_sample(SOUND_METALHIT_45);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1744_38_end: ;
}
void Frames::col_22_38()
{
    event_func_9242();
    event_func_9243();
}
void Frames::event_func_9244()
{
    // event 1503_38
    {
        if (!(group_main_engine_1)) goto event_1503_38_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(1)) == (0))) goto event_1503_38_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.set(1, 1);
    }
    event_1503_38_end: ;
}
void Frames::col_23_38()
{
    event_func_9244();
}
void Frames::event_func_9245()
{
    // event 1741_38
    {
        if (!(group_main_engine_1)) goto event_1741_38_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1741_38_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1741_38_0; single_instance_1741_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1741_38_0 == NULL)
                single_instance_1741_38_0 = new_obj;
        }
        media.stop_sample(SOUND_METALHIT_45);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1741_38_end: ;
}
void Frames::col_26_38()
{
    event_func_9245();
}
void Frames::event_func_9246()
{
    // event 1741_38
    {
        if (!(group_main_engine_1)) goto event_1741_38_end;
        ((Active*)((Active*)col_instance_1))->destroy();
        FrameObject * single_instance_1741_38_0; single_instance_1741_38_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1741_38_0 == NULL)
                single_instance_1741_38_0 = new_obj;
        }
        media.stop_sample(SOUND_METALHIT_45);
        media.play_id(SOUND_METALHIT_45, -1, 1);
    }
    event_1741_38_end: ;
}
void Frames::col_32_38()
{
    event_func_9246();
}
void Frames::event_func_9247()
{
    // event 1752_38
    {
        if (!(group_main_engine_1)) goto event_1752_38_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) == (1))) goto event_1752_38_end;
        ((Active*)((Active*)col_instance_1))->alterables->values.add(0, 1);
        ((Active*)get_instance(bosscrystalspikespawner1_2294_instances))->alterables->flags.enable(1);
        ((Active*)get_instance(bosscrystalspikespawner2_2295_instances))->alterables->flags.enable(1);
        media.play_id(SOUND_COMMON_SHATTER_13, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        ((Active*)get_instance(effectwarning_1065_instances))->set_visible(false);
        crystalplatform_2317_instances.clear_selection();
        for (ObjectIterator it(crystalplatform_2317_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.disable(0);
        }
    }
    event_1752_38_end: ;
}
void Frames::col_36_38()
{
    event_func_9247();
}
