#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::handle_frame_65_pre_events()
{
}
void Frames::event_func_13945()
{
    // event 1_64
    {
#ifdef CHOWDREN_WAIT
        ((SteamObject*)get_instance(sarassteampluginfreedomplanet_26_instances))->find_board(global_values->get(1), 7);
#endif
    }
    event_1_64_end: ;
}
void Frames::event_func_13946()
{
    // event 7_64
    {
        if (!(group_main_engine_1)) goto event_7_64_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 3000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 47);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_7_64_end: ;
}
void Frames::event_func_13947()
{
    // event 24_64
    {
        if (!(group_main_engine_1)) goto event_24_64_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.92);
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.75);
            ((SystemBox*)*it)->alterables->values.set(4, 0.75);
        }
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.set(3, 0.94);
        ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->alterables->values.set(5, ((SystemBox*)get_instance(levelbrevonshipclose_3334_instances))->get_x());
        ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.set(3, 0.94);
        ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.set(4, 0.8);
        ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->alterables->values.set(5, ((SystemBox*)get_instance(levelbrevonshipclose2_3335_instances))->get_x());
    }
    event_24_64_end: ;
}
void Frames::event_func_13948()
{
    // event 1626_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1626_64_end;
        {
            loop_spw_running = true;
            int times = int(72);
            loop_spw_index = 0;
            while (loop_spw_index < times) {
                loop_spw_64();
                if (!loop_spw_running) break;
                loop_spw_index++;
            }
        }
    }
    event_1626_64_end: ;
}
void Frames::event_func_13949()
{
    // event 1627_64
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_1)) goto event_1627_64_end;
        bossshadebeasteye_3346_instances.clear_selection();
        spread_value(bossshadebeasteye_3346_instances, 3, 0);
        for (ObjectIterator it(bossshadebeasteye_3346_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(3)*30);
        }
        bossshadebeastbottomtooth_3364_instances.clear_selection();
        spread_value(bossshadebeastbottomtooth_3364_instances, 0, 1);
        bossshadebeasttoptooth_3363_instances.clear_selection();
        spread_value(bossshadebeasttoptooth_3363_instances, 0, 1);
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.set(2, ((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_x());
        ((Active*)get_instance(bossdailspawnpoint_3356_instances))->alterables->values.set(3, ((Active*)get_instance(bossdailspawnpoint_3356_instances))->get_x());
        bossdail_3359_instances.clear_selection();
        for (ObjectIterator it(bossdail_3359_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
        bossshadebeast_3357_instances.clear_selection();
        for (ObjectIterator it(bossshadebeast_3357_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(24, ((Active*)*it)->get_y());
        }
    }
    event_1627_64_end: ;
}
void Frames::event_func_13950()
{
    // event 1948_64
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1)) goto event_1948_64_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(2, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(3, 0);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(4, ((Active*)get_instance(sign_351_instances))->get_x()+((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(23));
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(5, height);
    }
    event_1948_64_end: ;
}
void Frames::on_frame_65_start_events()
{
    event_func_13945();
    event_func_4133();
    event_func_3265();
    event_func_4318();
    event_func_13946();
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
    event_func_13947();
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
    event_func_2686();
    event_func_11502();
    event_func_3990();
    event_func_13948();
    event_func_13949();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_13950();
    event_func_13120();
    event_func_4145();
    event_func_5573();
    event_func_11365();
    event_func_13541();
    event_func_13542();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_65_init()
{
    index = 64;
    width = 3200;
    height = 2016;
    virtual_width = 3200;
    virtual_height = 2016;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.5, 0.5, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &bgplatform1_3318_instances, NULL};
    qualifier_8.set(10, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &bgplatform1_3318_instances, NULL};
    qualifier_9.set(33, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&parallaxorb_3289_instances, &parallaxthundercarrier_3291_instances, &parallaxufo_3292_instances, &bosssparky_3327_instances, &enemybeastiris_3353_instances, &bossdail_3359_instances, NULL};
    qualifier_20.set(6, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &objectexplosiveblock_2708_instances, &bosshatchdoor_3317_instances, NULL};
    qualifier_7.set(28, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &effectbossshade_3347_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, &active_3368_instances, NULL};
    qualifier_14.set(2, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, &enemyorbshot_3293_instances, &enemythundercarrierbolt_3294_instances, NULL};
    qualifier_17.set(3, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &active_3368_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, NULL};
    qualifier_13.set(1, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3283(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_3198(0, 0), 0);
    add_background_object(create_levelparallaxpiece5_3200(0, 224), 0);
    add_background_object(create_levelparallaxpiece2_3285(0, 280), 0);
    add_background_object(create_levelbrevonshipclose_3334(-40, -88), 0);
    add_background_object(create_levelbrevonshipclose2_3335(265, -88), 0);
    add_object(create_liftoffjet1_3354(-38, -97), 0);
    add_object(create_liftoffjet2_3355(270, -97), 0);
    add_object(create_brevonmechbackground_2513(180, 885), 1);
    add_object(create_leveldarksky_2069(0, 0), 1);
    add_background_object(create_bgfacility10_3269(56, 2048), 2);
    add_background_object(create_bgfacility10_3269(216, 2048), 2);
    add_background_object(create_bgfacility11_3268(-88, 960), 2);
    add_background_object(create_bgfacility11_3268(544, 1824), 2);
    add_background_object(create_bgfacility11_3268(544, 1888), 2);
    add_background_object(create_bgfacility9_3267(512, 1696), 2);
    add_background_object(create_bgfacility9_3267(608, 1696), 2);
    add_background_object(create_bgfacility9_3267(512, 1824), 2);
    add_background_object(create_bgfacility9_3267(608, 1824), 2);
    add_background_object(create_bgfacility8_3295(384, 1824), 2);
    add_background_object(create_bgfacility9_3267(56, 2112), 2);
    add_background_object(create_bgfacility9_3267(216, 2112), 2);
    add_background_object(create_bgfacility8_3295(1536, 1824), 2);
    add_background_object(create_bgfacility9_3267(608, 1568), 2);
    add_background_object(create_bgfacility9_3267(608, 1440), 2);
    add_background_object(create_bgplatformsupport1_3296(640, 1440), 2);
    add_background_object(create_bgfacility9_3267(352, 1696), 2);
    add_background_object(create_bgfacility9_3267(352, 1824), 2);
    add_background_object(create_bgfacility9_3267(256, 1696), 2);
    add_background_object(create_bgfacility9_3267(256, 1824), 2);
    add_background_object(create_bgfacility9_3267(256, 1440), 2);
    add_background_object(create_bgfacility9_3267(256, 1568), 2);
    add_background_object(create_bgplatformsupport2_3297(192, 1440), 2);
    add_background_object(create_bgfacility11_3268(288, 1824), 2);
    add_background_object(create_bgfacility11_3268(288, 1888), 2);
    add_background_object(create_bgfacility11_3268(1696, 1824), 2);
    add_background_object(create_bgfacility11_3268(1696, 1888), 2);
    add_background_object(create_bgfacility9_3267(1664, 1696), 2);
    add_background_object(create_bgfacility9_3267(1760, 1696), 2);
    add_background_object(create_bgfacility9_3267(1664, 1824), 2);
    add_background_object(create_bgfacility9_3267(1760, 1824), 2);
    add_background_object(create_bgfacility9_3267(1760, 1568), 2);
    add_background_object(create_bgfacility9_3267(1760, 1440), 2);
    add_background_object(create_bgplatformsupport1_3296(1792, 1440), 2);
    add_background_object(create_bgfacility9_3267(1504, 1696), 2);
    add_background_object(create_bgfacility9_3267(1504, 1824), 2);
    add_background_object(create_bgfacility9_3267(1408, 1696), 2);
    add_background_object(create_bgfacility9_3267(1408, 1824), 2);
    add_background_object(create_bgfacility9_3267(1408, 1440), 2);
    add_background_object(create_bgfacility9_3267(1408, 1568), 2);
    add_background_object(create_bgplatformsupport2_3297(1344, 1440), 2);
    add_background_object(create_bgfacility11_3268(1440, 1824), 2);
    add_background_object(create_bgfacility11_3268(1440, 1888), 2);
    add_background_object(create_bgplatformsupport1_3296(88, 2112), 2);
    add_background_object(create_bgplatformsupport2_3297(152, 2112), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(2448, 261), 2);
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
    add_object(create_objectsiren_3337(319, 1839), 2);
    add_object(create_objectsiren_3337(1487, 1839), 2);
    add_object(create_objectsiren_3337(1711, 1839), 2);
    add_object(create_bossdailspawnpoint_3356(1024, 1984), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_bgrocks1_3213(-624, 1224), 3);
    add_background_object(create_bgfacility1_3271(0, 1952), 3);
    add_background_object(create_bgfacility3_3272(512, 1952), 3);
    add_background_object(create_bgfacility1_3271(128, 1952), 3);
    add_background_object(create_bgfacility1_3271(256, 1952), 3);
    add_background_object(create_bgfacility1_3271(384, 1952), 3);
    add_background_object(create_bgfacility13_3278(-528, 1352), 3);
    add_background_object(create_bgfacility14_3279(-368, 1352), 3);
    add_background_object(create_bgfacility12_3280(-496, 1352), 3);
    add_background_object(create_bgfacility4_3275(-528, 1288), 3);
    add_background_object(create_bgfacility5_3276(-528, 1224), 3);
    add_background_object(create_bgfacility6_3274(-368, 1288), 3);
    add_background_object(create_bgfacility7_3277(-368, 1224), 3);
    add_background_object(create_bgfacility13_3278(544, 1760), 3);
    add_background_object(create_bgfacility14_3279(576, 1760), 3);
    add_background_object(create_bgfacility2_3273(608, 1952), 3);
    add_background_object(create_bgfacility1_3271(640, 1952), 3);
    add_background_object(create_bgfacility1_3271(896, 1952), 3);
    add_background_object(create_bgfacility1_3271(1024, 1952), 3);
    add_background_object(create_bgfacility1_3271(2048, 1952), 3);
    add_background_object(create_bgfacility1_3271(1920, 1952), 3);
    add_background_object(create_bgfacility1_3271(1280, 1952), 3);
    add_background_object(create_bgfacility3_3272(1408, 1952), 3);
    add_background_object(create_bgfacility2_3273(1504, 1952), 3);
    add_background_object(create_bgfacility1_3271(1536, 1952), 3);
    add_background_object(create_bgfacility1_3271(1664, 1952), 3);
    add_background_object(create_bgfacility1_3271(1792, 1952), 3);
    add_background_object(create_bgfacility1_3271(2176, 1952), 3);
    add_background_object(create_bgfacility3_3272(576, 1952), 3);
    add_background_object(create_bgfacility2_3273(544, 1952), 3);
    add_background_object(create_bgfacility3_3272(1472, 1952), 3);
    add_background_object(create_bgfacility2_3273(1440, 1952), 3);
    add_background_object(create_bgfacility3_3272(576, 1440), 3);
    add_background_object(create_bgfacility2_3273(544, 1440), 3);
    add_background_object(create_bgfacility3_3272(-368, 1160), 3);
    add_background_object(create_bgfacility2_3273(-528, 1160), 3);
    add_background_object(create_bgfacility1_3271(-496, 1160), 3);
    add_background_object(create_bgfacility4_3275(544, 1696), 3);
    add_background_object(create_bgfacility5_3276(544, 1632), 3);
    add_background_object(create_bgfacility6_3274(576, 1696), 3);
    add_background_object(create_bgfacility7_3277(576, 1632), 3);
    add_background_object(create_bgfacility4_3275(544, 1568), 3);
    add_background_object(create_bgfacility5_3276(544, 1504), 3);
    add_background_object(create_bgfacility6_3274(576, 1568), 3);
    add_background_object(create_bgfacility7_3277(576, 1504), 3);
    add_background_object(create_bgfacility13_3278(352, 1632), 3);
    add_background_object(create_bgfacility14_3279(512, 1632), 3);
    add_background_object(create_bgfacility12_3280(384, 1632), 3);
    add_background_object(create_bgfacility3_3272(512, 1568), 3);
    add_background_object(create_bgfacility2_3273(352, 1568), 3);
    add_background_object(create_bgfacility1_3271(384, 1568), 3);
    add_background_object(create_bgfacility13_3278(160, 1376), 3);
    add_background_object(create_bgfacility14_3279(704, 1376), 3);
    add_background_object(create_bgfacility12_3280(576, 1376), 3);
    add_background_object(create_bgfacility3_3272(704, 1312), 3);
    add_background_object(create_bgfacility2_3273(160, 1312), 3);
    add_background_object(create_bgfacility1_3271(576, 1312), 3);
    add_background_object(create_bgfacility12_3280(192, 1376), 3);
    add_background_object(create_bgfacility1_3271(192, 1312), 3);
    add_background_object(create_bgfacility13_3278(352, 1504), 3);
    add_background_object(create_bgfacility14_3279(512, 1504), 3);
    add_background_object(create_bgfacility12_3280(384, 1504), 3);
    add_background_object(create_bgfacility3_3272(512, 1440), 3);
    add_background_object(create_bgfacility2_3273(352, 1440), 3);
    add_background_object(create_bgfacility1_3271(384, 1440), 3);
    add_background_object(create_bgfacility12_3280(448, 1376), 3);
    add_background_object(create_bgfacility1_3271(448, 1312), 3);
    add_background_object(create_bgfacility13_3278(288, 1760), 3);
    add_background_object(create_bgfacility14_3279(320, 1760), 3);
    add_background_object(create_bgfacility3_3272(320, 1440), 3);
    add_background_object(create_bgfacility2_3273(288, 1440), 3);
    add_background_object(create_bgfacility4_3275(288, 1696), 3);
    add_background_object(create_bgfacility5_3276(288, 1632), 3);
    add_background_object(create_bgfacility6_3274(320, 1696), 3);
    add_background_object(create_bgfacility7_3277(320, 1632), 3);
    add_background_object(create_bgfacility4_3275(288, 1568), 3);
    add_background_object(create_bgfacility5_3276(288, 1504), 3);
    add_background_object(create_bgfacility6_3274(320, 1568), 3);
    add_background_object(create_bgfacility7_3277(320, 1504), 3);
    add_background_object(create_bgfacility12_3280(320, 1376), 3);
    add_background_object(create_bgfacility1_3271(320, 1312), 3);
    add_background_object(create_bgfacility12_3280(832, 1120), 3);
    add_background_object(create_bgfacility1_3271(832, 1056), 3);
    add_background_object(create_bgfacility12_3280(320, 1120), 3);
    add_background_object(create_bgfacility1_3271(320, 1056), 3);
    add_background_object(create_bgfacility13_3278(288, 1120), 3);
    add_background_object(create_bgfacility2_3273(288, 1056), 3);
    add_background_object(create_bgfacility14_3279(960, 1120), 3);
    add_background_object(create_bgfacility3_3272(960, 1056), 3);
    add_background_object(create_bgfacility1_3271(2304, 1952), 3);
    add_background_object(create_bgfacility1_3271(2432, 1952), 3);
    add_background_object(create_bgfacility1_3271(2560, 1952), 3);
    add_background_object(create_bgfacility1_3271(2688, 1952), 3);
    add_background_object(create_bgfacility1_3271(2816, 1952), 3);
    add_background_object(create_bgfacility1_3271(2944, 1952), 3);
    add_background_object(create_bgfacility1_3271(3072, 1952), 3);
    add_background_object(create_bgfacility13_3278(1312, 1248), 3);
    add_background_object(create_bgfacility14_3279(1856, 1248), 3);
    add_background_object(create_bgfacility12_3280(1728, 1248), 3);
    add_background_object(create_bgfacility3_3272(1856, 1184), 3);
    add_background_object(create_bgfacility2_3273(1312, 1184), 3);
    add_background_object(create_bgfacility1_3271(1728, 1184), 3);
    add_background_object(create_bgfacility12_3280(1344, 1248), 3);
    add_background_object(create_bgfacility1_3271(1344, 1184), 3);
    add_background_object(create_bgfacility12_3280(1600, 1248), 3);
    add_background_object(create_bgfacility1_3271(1600, 1184), 3);
    add_background_object(create_bgfacility12_3280(1472, 1248), 3);
    add_background_object(create_bgfacility1_3271(1472, 1184), 3);
    add_background_object(create_bgfacility13_3278(160, 1248), 3);
    add_background_object(create_bgfacility14_3279(704, 1248), 3);
    add_background_object(create_bgfacility12_3280(576, 1248), 3);
    add_background_object(create_bgfacility3_3272(704, 1184), 3);
    add_background_object(create_bgfacility2_3273(160, 1184), 3);
    add_background_object(create_bgfacility1_3271(576, 1184), 3);
    add_background_object(create_bgfacility12_3280(192, 1248), 3);
    add_background_object(create_bgfacility1_3271(192, 1184), 3);
    add_background_object(create_bgfacility12_3280(448, 1248), 3);
    add_background_object(create_bgfacility1_3271(448, 1184), 3);
    add_background_object(create_bgfacility12_3280(320, 1248), 3);
    add_background_object(create_bgfacility1_3271(320, 1184), 3);
    add_background_object(create_bgfacility12_3280(1600, 1120), 3);
    add_background_object(create_bgfacility1_3271(1600, 1056), 3);
    add_background_object(create_bgfacility12_3280(1088, 1120), 3);
    add_background_object(create_bgfacility1_3271(1088, 1056), 3);
    add_background_object(create_bgfacility13_3278(1056, 1120), 3);
    add_background_object(create_bgfacility2_3273(1056, 1056), 3);
    add_background_object(create_bgfacility14_3279(1728, 1120), 3);
    add_background_object(create_bgfacility3_3272(1728, 1056), 3);
    add_background_object(create_bgfacility13_3278(1312, 1376), 3);
    add_background_object(create_bgfacility14_3279(1856, 1376), 3);
    add_background_object(create_bgfacility12_3280(1728, 1376), 3);
    add_background_object(create_bgfacility3_3272(1856, 1312), 3);
    add_background_object(create_bgfacility2_3273(1312, 1312), 3);
    add_background_object(create_bgfacility1_3271(1728, 1312), 3);
    add_background_object(create_bgfacility12_3280(1344, 1376), 3);
    add_background_object(create_bgfacility1_3271(1344, 1312), 3);
    add_background_object(create_bgfacility12_3280(1600, 1376), 3);
    add_background_object(create_bgfacility1_3271(1600, 1312), 3);
    add_background_object(create_bgfacility12_3280(1472, 1376), 3);
    add_background_object(create_bgfacility1_3271(1472, 1312), 3);
    add_background_object(create_bgfacility13_3278(1696, 1760), 3);
    add_background_object(create_bgfacility14_3279(1728, 1760), 3);
    add_background_object(create_bgfacility3_3272(1728, 1440), 3);
    add_background_object(create_bgfacility2_3273(1696, 1440), 3);
    add_background_object(create_bgfacility4_3275(1696, 1696), 3);
    add_background_object(create_bgfacility5_3276(1696, 1632), 3);
    add_background_object(create_bgfacility6_3274(1728, 1696), 3);
    add_background_object(create_bgfacility7_3277(1728, 1632), 3);
    add_background_object(create_bgfacility4_3275(1696, 1568), 3);
    add_background_object(create_bgfacility5_3276(1696, 1504), 3);
    add_background_object(create_bgfacility6_3274(1728, 1568), 3);
    add_background_object(create_bgfacility7_3277(1728, 1504), 3);
    add_background_object(create_bgfacility13_3278(1504, 1632), 3);
    add_background_object(create_bgfacility14_3279(1664, 1632), 3);
    add_background_object(create_bgfacility12_3280(1536, 1632), 3);
    add_background_object(create_bgfacility3_3272(1664, 1568), 3);
    add_background_object(create_bgfacility2_3273(1504, 1568), 3);
    add_background_object(create_bgfacility1_3271(1536, 1568), 3);
    add_background_object(create_bgfacility13_3278(1504, 1504), 3);
    add_background_object(create_bgfacility14_3279(1664, 1504), 3);
    add_background_object(create_bgfacility12_3280(1536, 1504), 3);
    add_background_object(create_bgfacility3_3272(1664, 1440), 3);
    add_background_object(create_bgfacility2_3273(1504, 1440), 3);
    add_background_object(create_bgfacility1_3271(1536, 1440), 3);
    add_background_object(create_bgfacility13_3278(1440, 1760), 3);
    add_background_object(create_bgfacility14_3279(1472, 1760), 3);
    add_background_object(create_bgfacility3_3272(1472, 1440), 3);
    add_background_object(create_bgfacility2_3273(1440, 1440), 3);
    add_background_object(create_bgfacility4_3275(1440, 1696), 3);
    add_background_object(create_bgfacility5_3276(1440, 1632), 3);
    add_background_object(create_bgfacility6_3274(1472, 1696), 3);
    add_background_object(create_bgfacility7_3277(1472, 1632), 3);
    add_background_object(create_bgfacility4_3275(1440, 1568), 3);
    add_background_object(create_bgfacility5_3276(1440, 1504), 3);
    add_background_object(create_bgfacility6_3274(1472, 1568), 3);
    add_background_object(create_bgfacility7_3277(1472, 1504), 3);
    add_background_object(create_bgfacility12_3280(448, 1120), 3);
    add_background_object(create_bgfacility1_3271(448, 1056), 3);
    add_background_object(create_bgfacility12_3280(1344, 1120), 3);
    add_background_object(create_bgfacility1_3271(1344, 1056), 3);
    add_background_object(create_bgfacility12_3280(1472, 1120), 3);
    add_background_object(create_bgfacility1_3271(1472, 1056), 3);
    add_background_object(create_bgfacility12_3280(576, 1120), 3);
    add_background_object(create_bgfacility1_3271(576, 1056), 3);
    add_background_object(create_bgfacility12_3280(704, 1120), 3);
    add_background_object(create_bgfacility1_3271(704, 1056), 3);
    add_background_object(create_bgfacility12_3280(1216, 1120), 3);
    add_background_object(create_bgfacility1_3271(1216, 1056), 3);
    add_background_object(create_bgfacility2_3273(1248, 1952), 3);
    add_background_object(create_bgfacility2_3273(864, 1952), 3);
    add_background_object(create_bgfacility3_3272(1152, 1952), 3);
    add_background_object(create_bgfacility3_3272(768, 1952), 3);
    add_background_object(create_bgrocks13_3212(800, 1968), 3);
    add_background_object(create_bgsnow12_3245(800, 1952), 3);
    add_background_object(create_bgsnow8_3229(864, 1952), 3);
    add_background_object(create_bgsnow9_3222(784, 1952), 3);
    add_background_object(create_bgrocks13_3212(1184, 1968), 3);
    add_background_object(create_bgsnow12_3245(1184, 1952), 3);
    add_background_object(create_bgsnow8_3229(1248, 1952), 3);
    add_background_object(create_bgsnow9_3222(1168, 1952), 3);
    add_object(create_objectdigspot_734(1200, 1920), 3);
    add_object(create_objectdigspot_734(816, 1920), 3);
    add_object(create_bgplatform1_3318(495, 1807), 3);
    add_object(create_bgplatform1_3318(367, 1807), 3);
    add_object(create_bgplatform1_3318(167, 2095), 3);
    add_object(create_bgplatform1_3318(103, 2095), 3);
    add_object(create_bossshadebeast_3357(1024, 1760), 3);
    add_object(create_playerstartingpoint_358(125, 1933), 3);
    add_object(create_effectwarning_1513(-460, 1104), 3);
    add_object(create_bosshatchdoor_3317(576, 2016), 3);
    add_object(create_cameratriggerboss_424(1016, 1232), 3);
    add_object(create_layerchangeswitch2_1239(2048, 40), 3);
    add_object(create_bosshatchdoor_3317(1440, 1824), 3);
    add_object(create_bossshadebeastcrown_3358(1024, 1760), 3);
    add_object(create_bossdail_3359(1022, 1704), 3);
    add_object(create_bossshadebeastmouth_3361(-144, 1744), 3);
    add_object(create_bossvortex1_3362(-128, 1664), 3);
    add_object(create_bossshadebeasttoptooth_3363(-184, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-168, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-152, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-136, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-120, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-104, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-88, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-72, 1796), 3);
    add_object(create_bossshadebeasttoptooth_3363(-56, 1796), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-184, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-168, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-152, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-136, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-120, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-104, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-88, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-72, 1835), 3);
    add_object(create_bossshadebeastbottomtooth_3364(-56, 1835), 3);
    add_object(create_bossvortex2_3365(-56, 1664), 3);
    add_object(create_enemylimiter_350(1461, 1938), 3);
    add_object(create_enemylimiter_350(21, 1938), 3);
    add_object(create_bossdailfall_3366(1016, 1631), 3);
    add_object(create_objectexplosiveblock_2708(248, 2176), 3);
    add_object(create_enemylimiter_350(613, 1938), 3);
    add_object(create_objectexplosiveblock_2708(248, 2112), 3);
    add_object(create_monitorbomb_563(448, 1920), 3);
    add_object(create_monitorbomb_563(416, 1920), 3);
    add_object(create_objectpetal_302(369, 1769), 3);
    add_object(create_objectpetal_302(401, 1769), 3);
    add_object(create_objectpetal_302(369, 1745), 3);
    add_object(create_objectpetal_302(401, 1745), 3);
    add_object(create_objectpetal_302(369, 1721), 3);
    add_object(create_objectpetal_302(401, 1721), 3);
    add_object(create_objectpetal_302(497, 1769), 3);
    add_object(create_objectpetal_302(529, 1769), 3);
    add_object(create_objectpetal_302(497, 1745), 3);
    add_object(create_objectpetal_302(529, 1745), 3);
    add_object(create_objectpetal_302(497, 1721), 3);
    add_object(create_objectpetal_302(529, 1721), 3);
    add_object(create_bosssparkytail_3305(408, 2248), 3);
    add_object(create_bosssparkytail_3305(408, 2224), 3);
    add_object(create_bosssparkytail_3305(408, 2200), 3);
    add_object(create_bosssparkytail_3305(408, 2176), 3);
    add_object(create_bosssparkyleftarm_3328(408, 2120), 3);
    add_object(create_bosssparkyrightarm_3329(408, 2120), 3);
    add_object(create_bosssparky_3327(408, 2120), 3);
    add_object(create_sarassteampluginfreedomplanet_26(-192, -128), 3);
    add_object(create_objectfuel_528(1348, 2044), 3);
    add_object(create_device_3367(-72, 2072), 3);
    add_object(create_device_3367(-112, 2072), 3);
    add_object(create_device_3367(-32, 2072), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
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
    add_object(create_hazardspikesup_1769(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(489, -152), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(1024, 1951), 5);
    add_object(create_cameralimitbossleft_421(608, 1792), 5);
    add_object(create_cameralimitbossright_422(1439, 1720), 5);
    add_object(create_cameralimitbosstop_423(1016, 1440), 5);
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
    add_object(create_active_3368(-376, 2088), 5);
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
    add_object(create_dialogdata_3369(-128, 464), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
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
    add_object(create_levelcardfade_461(0, 0), 7);
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
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
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
    loop_vortex_running = false;
    loop_vortex_index = 0;
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
    loop_xplode_running = false;
    loop_xplode_index = 0;
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
    loop_spw_running = false;
    loop_spw_index = 0;
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
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_64, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_64, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_64, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_64, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_64, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_64, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_64, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_64, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_64, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_64, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_64, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_64, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_64, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_64, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_64, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_64, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_64, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_64, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_64, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_64, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_64, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_64, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_64, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_64, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_64, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_64, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_64, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_64, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_64, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_64, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_64, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_64, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_64, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_64, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_64, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_64, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_64, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_64, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_64, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_64, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_64, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_64, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_64, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_64, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_64, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_64, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_64, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_64, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_64, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_64, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_64, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_64, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_64, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_64, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1515_64 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    once_condition_1848_64 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1525_19 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_172_8 = loop_count;
    not_always_449_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_1048_14 = loop_count;
    not_always_1517_19 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_101_0 = loop_count;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1511_64 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_1756_64 = loop_count;
    not_always_100_0 = loop_count;
    once_condition_1787_64 = false;
    once_condition_1555_64 = false;
    not_always_43_13 = loop_count;
    not_always_1534_64 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    once_condition_1582_64 = false;
    not_always_40_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_score_count_end_of_level_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    not_always_1425_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    group_main_engine_level_specific_methods_stage_clear_1 = false;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_1768_64 = loop_count;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    once_condition_1594_64 = false;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_level_specific_methods_cutscenes_prepare_for_liftoff_1 = false;
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
    not_always_2088_63 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    once_condition_1788_64 = false;
    not_always_2173_64 = loop_count;
    once_condition_1593_64 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    once_condition_1553_64 = false;
    once_condition_1531_23 = false;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    group_main_engine_level_specific_methods_cutscenes_team_meeting_1 = false;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_level_specific_methods_bosses_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    once_condition_1585_64 = false;
    not_always_1512_64 = loop_count;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_2137_46 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_69_13 = loop_count;
    once_condition_1763_64 = false;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    not_always_1496_34 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_intro_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_57_13 = loop_count;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1449_13 = loop_count;
    not_always_1518_19 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    once_condition_1676_64 = false;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_1516_19 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_voice_acting_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_team_meeting_dialog_system_dialog_voices_blips_1 = false;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_2136_46 = loop_count;
    not_always_174_8 = loop_count;
    not_always_99_0 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
    group_main_engine_level_specific_methods_frame_transition_1 = false;
    once_condition_66_13 = false;
    once_condition_1847_64 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    once_condition_4_19 = false;
    once_condition_1762_64 = false;
    not_always_1039_13 = loop_count;
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
    not_always_1510_19 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_1 = false;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_95_0 = loop_count;
    not_always_1741_14 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_2085_63 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    not_always_1515_19 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1514_19 = loop_count;
    not_always_1508_64 = loop_count;
    not_always_1483_43 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_player_sparky_player_sparky_controls_1 = false;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    once_condition_1695_64 = false;
    not_always_59_13 = loop_count;
    not_always_1255_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_shade_beast_boss_shade_beast_main_beast_movement_1 = true;
}
void Frames::event_func_13951()
{
    // event 1777_65
    {
        if (!(group_main_engine_1)) goto event_1777_65_end;
        enemypounder_3419_instances.clear_selection();
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemypounder_3419_instances.has_selection()) goto event_1777_65_end;
        FrameObject * single_instance_1777_65_0; single_instance_1777_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemypounder_3419_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1777_65_0 == NULL)
                    single_instance_1777_65_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1777_65_0))->get_movement()->set_speed(70+randrange(30));
        ((Active*)((Active*)single_instance_1777_65_0))->force_frame(155+((Active*)get_single(enemypounder_3419_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemypounder_3419_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1777_65_end: ;
}
void Frames::loop_spawndebris_65()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_5153();
    event_func_8590();
    event_func_11381();
    event_func_5583();
    event_func_8592();
    event_func_13951();
    event_func_6950();
}
void Frames::event_func_13952()
{
    // event 2019_65
    {
        if (!(group_main_engine_1)) goto event_2019_65_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage10_ogg_224, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2019_65_end: ;
}
void Frames::loop_play_music_5_65()
{
    event_func_13952();
}
void Frames::event_func_13953()
{
    // event 1476_65
    {
        if (!(group_main_engine_1)) goto event_1476_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(6)) >= (0))) goto event_1476_65_end;
        playersensorbottombig_397_instances.clear_selection();
        objectlowspring_3429_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, objectlowspring_3429_instances)) goto event_1476_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -7);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 40);
        media.play_id(SOUND_FD_SPRING_382, -1, 1);
        ((Active*)get_instance(playeractionvaluesa_387_instances))->alterables->values.set(2, 0);
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(objectlowspring_3429_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(0);
            ((Active*)*it)->force_animation(7);
        }
        ((Active*)get_instance(playeractionvaluesb_388_instances))->alterables->values.set(14, 0);
    }
    event_1476_65_end: ;
}
void Frames::loop_player01_interruption_control_65()
{
    event_func_1304();
    event_func_1305();
    event_func_1306();
    event_func_1307();
    event_func_1308();
    event_func_2712();
    event_func_2713();
    event_func_2714();
    event_func_2715();
    event_func_2716();
    event_func_2717();
    event_func_2718();
    event_func_2719();
    event_func_2720();
    event_func_2721();
    event_func_2722();
    event_func_2723();
    event_func_2724();
    event_func_2725();
    event_func_2726();
    event_func_2727();
    event_func_13953();
}
void Frames::loop_wrapper_sound_hurt1_65(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_65(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_65(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_65(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_65(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_65(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_65(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_65(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_65(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_65(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_65(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_65(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_65(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_65(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_sound_attack1_65(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_65(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_65(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_65(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_65(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_65();
}
void Frames::loop_wrapper_play_music_6_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_65(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_explode3_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_65(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_65(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_65(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_13954()
{
    // event 1612_65
    {
        if (!(group_main_engine_1)) goto event_1612_65_end;
        enemytankbot_2821_instances.clear_selection();
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_spawner)->get_x()-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_spawner)->get_x()+8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_spawner)->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_spawner)->alterables->values.get(0)-50))) { it.deselect(); continue; }
        }
        if (!enemytankbot_2821_instances.has_selection()) goto event_1612_65_end;
        for (ObjectIterator it(enemytankbot_2821_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)foreach_instance_spawner))->alterables->values.set(2, 1);
    }
    event_1612_65_end: ;
}
void Frames::event_func_13955()
{
    // event 1614_65
    {
        if (!(group_main_engine_1)) goto event_1614_65_end;
        enemyhopper_1168_instances.clear_selection();
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_spawner)->get_x()-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_spawner)->get_x()+8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_spawner)->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_spawner)->alterables->values.get(0)-50))) { it.deselect(); continue; }
        }
        if (!enemyhopper_1168_instances.has_selection()) goto event_1614_65_end;
        ((Active*)((Active*)foreach_instance_spawner))->alterables->values.set(2, 2);
        for (ObjectIterator it(enemyhopper_1168_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1614_65_end: ;
}
void Frames::event_func_13956()
{
    // event 1616_65
    {
        if (!(group_main_engine_1)) goto event_1616_65_end;
        enemyfirespitter_1385_instances.clear_selection();
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_spawner)->get_x()-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_spawner)->get_x()+8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_spawner)->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_spawner)->alterables->values.get(0)-50))) { it.deselect(); continue; }
        }
        if (!enemyfirespitter_1385_instances.has_selection()) goto event_1616_65_end;
        ((Active*)((Active*)foreach_instance_spawner))->alterables->values.set(2, 3);
        for (ObjectIterator it(enemyfirespitter_1385_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1616_65_end: ;
}
void Frames::event_func_13957()
{
    // event 1618_65
    {
        if (!(group_main_engine_1)) goto event_1618_65_end;
        enemyhoppermkii_2200_instances.clear_selection();
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)foreach_instance_spawner)->get_x()-8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)foreach_instance_spawner)->get_x()+8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) < (((Active*)foreach_instance_spawner)->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) > (((Active*)foreach_instance_spawner)->alterables->values.get(0)-50))) { it.deselect(); continue; }
        }
        if (!enemyhoppermkii_2200_instances.has_selection()) goto event_1618_65_end;
        ((Active*)((Active*)foreach_instance_spawner))->alterables->values.set(2, 4);
        for (ObjectIterator it(enemyhoppermkii_2200_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1618_65_end: ;
}
void Frames::foreach_spawner_65()
{
    event_func_13954();
    event_func_13955();
    event_func_13956();
    event_func_13957();
}
void Frames::event_func_13958()
{
    // event 1767_65
    {
        if (!(group_main_engine_1)) goto event_1767_65_end;
        if (!((((Active*)foreach_instance_pound)->alterables->values.get(3)) == (1))) goto event_1767_65_end;
        if (!(((Active*)foreach_instance_pound)->overlaps_background())) goto event_1767_65_end;
        FrameObject * single_instance_1767_65_0; single_instance_1767_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardshockwave_1524(((Active*)foreach_instance_pound)->get_action_x() - ((Active*)foreach_instance_pound)->layer->off_x + 0, ((Active*)foreach_instance_pound)->get_action_y() - ((Active*)foreach_instance_pound)->layer->off_y + 0), ((Active*)foreach_instance_pound)->layer);
            if (single_instance_1767_65_0 == NULL)
                single_instance_1767_65_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1767_65_0))->set_direction(0);
        ((Active*)((Active*)single_instance_1767_65_0))->alterables->values.set(1, 40);
    }
    event_1767_65_end: ;
}
void Frames::event_func_13959()
{
    // event 1768_65
    {
        if (!(group_main_engine_1)) goto event_1768_65_end;
        if (!((((Active*)foreach_instance_pound)->alterables->values.get(3)) == (1))) goto event_1768_65_end;
        if (!(((Active*)foreach_instance_pound)->overlaps_background())) goto event_1768_65_end;
        FrameObject * single_instance_1768_65_0; single_instance_1768_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardshockwave_1524(((Active*)foreach_instance_pound)->get_action_x() - ((Active*)foreach_instance_pound)->layer->off_x + 0, ((Active*)foreach_instance_pound)->get_action_y() - ((Active*)foreach_instance_pound)->layer->off_y + 0), ((Active*)foreach_instance_pound)->layer);
            if (single_instance_1768_65_0 == NULL)
                single_instance_1768_65_0 = new_obj;
        }
        media.play_id(SOUND_COMMON_SLAM2_132, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 5));
        ((Active*)((Active*)foreach_instance_pound))->alterables->values.add(3, 1);
        ((Active*)((Active*)foreach_instance_pound))->alterables->values.set(5, 0);
        ((Active*)((Active*)single_instance_1768_65_0))->set_direction(16);
        ((Active*)((Active*)single_instance_1768_65_0))->alterables->values.set(1, 40);
    }
    event_1768_65_end: ;
}
void Frames::foreach_pound_65()
{
    event_func_13958();
    event_func_13959();
}
void Frames::event_func_13960()
{
    // event 1469_65
    {
        if (!(group_main_engine_1)) goto event_1469_65_end;
        if (!((((Active*)foreach_instance_st)->alterables->values.get(0)) > (60))) goto event_1469_65_end;
        FrameObject * single_instance_1469_65_0; single_instance_1469_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardspiralspark_3375(((Active*)foreach_instance_st)->x + 0, ((Active*)foreach_instance_st)->y + 0), ((Active*)foreach_instance_st)->layer);
            if (single_instance_1469_65_0 == NULL)
                single_instance_1469_65_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1469_65_0))->alterables->values.set(2, ((Active*)single_instance_1469_65_0)->get_x());
        ((Active*)((Active*)single_instance_1469_65_0))->alterables->values.set(3, ((Active*)single_instance_1469_65_0)->get_y());
    }
    event_1469_65_end: ;
}
void Frames::event_func_13961()
{
    // event 1470_65
    {
        if (!(group_main_engine_1)) goto event_1470_65_end;
        if (!((((Active*)foreach_instance_st)->alterables->values.get(0)) > (60))) goto event_1470_65_end;
        ((Active*)((Active*)foreach_instance_st))->set_direction(0);
        ((Active*)((Active*)foreach_instance_st))->alterables->values.set(0, -90);
        FrameObject * single_instance_1470_65_0; single_instance_1470_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_hazardspiralspark_3375(((Active*)foreach_instance_st)->x + 0, ((Active*)foreach_instance_st)->y + 0), ((Active*)foreach_instance_st)->layer);
            if (single_instance_1470_65_0 == NULL)
                single_instance_1470_65_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1470_65_0))->alterables->values.set(2, ((Active*)single_instance_1470_65_0)->get_x());
        ((Active*)((Active*)single_instance_1470_65_0))->alterables->values.set(3, ((Active*)single_instance_1470_65_0)->get_y());
        ((Active*)((Active*)single_instance_1470_65_0))->alterables->values.set(0, 180);
        FrameObject * single_instance_1470_65_1; single_instance_1470_65_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)foreach_instance_st)->x + 0, ((Active*)foreach_instance_st)->y + 0), ((Active*)foreach_instance_st)->layer);
            if (single_instance_1470_65_1 == NULL)
                single_instance_1470_65_1 = new_obj;
        }
    }
    event_1470_65_end: ;
}
void Frames::foreach_st_65()
{
    event_func_13960();
    event_func_13961();
}
void Frames::event_func_13962()
{
    // event 1782_65
    {
        if (!(group_main_engine_1)) goto event_1782_65_end;
        FrameObject * single_instance_1782_65_0; single_instance_1782_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitorbroken_330(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1782_65_0 == NULL)
                single_instance_1782_65_0 = new_obj;
        }
        FrameObject * single_instance_1782_65_1; single_instance_1782_65_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_monitoricon_331(((Active*)col_instance_1)->x + 0, ((Active*)col_instance_1)->y + 0), ((Active*)col_instance_1)->layer);
            if (single_instance_1782_65_1 == NULL)
                single_instance_1782_65_1 = new_obj;
        }
        ((Active*)((Active*)col_instance_1))->alterables->flags.disable(0);
        ((Active*)((Active*)col_instance_1))->destroy();
        ((Active*)((Active*)single_instance_1782_65_1))->force_frame(((Active*)col_instance_1)->alterables->values.get(2));
        media.play_id(SOUND_ITEM_ITEMBOX_12, -1, 1);
        ((Active*)((Active*)single_instance_1782_65_0))->set_direction(((Active*)col_instance_1)->alterables->values.get(3));
        ((Active*)((Active*)single_instance_1782_65_0))->move_back();
        ((Active*)((Active*)single_instance_1782_65_1))->alterables->values.set(1, ((Active*)get_instance(minibossflame_1199_instances, default_active_instance))->alterables->values.get(4));
    }
    event_1782_65_end: ;
}
void Frames::col_6_65()
{
    event_func_13962();
}
void Frames::event_func_13963()
{
    // event 1474_65
    {
        if (!(group_main_engine_1)) goto event_1474_65_end;
        if (!(((Active*)col_instance_1)->flags & VISIBLE)) goto event_1474_65_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1474_65_0; single_instance_1474_65_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1474_65_0 == NULL)
                single_instance_1474_65_0 = new_obj;
        }
    }
    event_1474_65_end: ;
}
void Frames::col_9_65()
{
    event_func_13963();
}
void Frames::event_func_13964()
{
    // event 1761_65
    {
        if (!(group_main_engine_1)) goto event_1761_65_end;
        if (!((((Active*)col_instance_2)->alterables->values.get(3)) == (0))) goto event_1761_65_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.toggle(1);
    }
    event_1761_65_end: ;
}
void Frames::col_15_65()
{
    event_func_13964();
}
void Frames::event_func_13965()
{
    // event 1808_65
    {
        if (!(group_main_engine_1)) goto event_1808_65_end;
        ((Active*)((Active*)col_instance_2))->alterables->values.sub(0, 30);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(24, -2);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(23, ((((Active*)col_instance_1)->get_direction()/math_helper/16)*2-1)*-5);
    }
    event_1808_65_end: ;
}
void Frames::col_17_65()
{
    event_func_13965();
}
void Frames::test_collisions_65()
{
    test_collisions(enemyfragbomb_2049_instances, enemyhoppermkii_2200_instances, 1, 1, (EventFunction)&Frames::col_0_36);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions_save(playerreflect_447_instances, enemypellet_863_instances, 1, 1, (EventFunction)&Frames::col_1_30);
    test_collisions(shieldwater_318_instances, enemysporeprojectile_969_instances, 1, 1, (EventFunction)&Frames::col_2_21);
    test_collisions(qualifier_8, effectsdebris_319_instances, 2147483648, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 1073741824, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_19, hazardshockwave_1524_instances, 1073741824, 1, (EventFunction)&Frames::col_6_65);
    test_collisions(playerreflect_447_instances, enemysporeprojectile_969_instances, 4, 2, (EventFunction)&Frames::col_5_24);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewleft_941_instances, 1, 1, (EventFunction)&Frames::col_9_20);
    test_collisions(playerreflect_447_instances, hazardspiralspark_3375_instances, 8, 1, (EventFunction)&Frames::col_9_65);
    test_collisions(qualifier_7, enemysporeprojectile_969_instances, 536870912, 4, (EventFunction)&Frames::col_6_21);
    test_collisions(qualifier_20, playerprojectile_320_instances, 268435456, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 134217728, 16, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 67108864, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, enemypellet_863_instances, 33554432, 2, (EventFunction)&Frames::col_11_30);
    test_collisions(enemylimiter_350_instances, enemypounder_3419_instances, 1, 1, (EventFunction)&Frames::col_15_65);
    test_collisions(qualifier_7, effectsdebris_319_instances, 16777216, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(hazardshockwave_1524_instances, enemyelitemask_2511_instances, 2, 1, (EventFunction)&Frames::col_17_65);
    test_collisions(qualifier_7, playerprojectile_320_instances, 8388608, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 4194304, 2, (EventFunction)&Frames::col_1_13);
    test_collisions(playercharactersensor_383_instances, enemypellet_863_instances, 1, 4, (EventFunction)&Frames::col_7_20);
    test_collisions(enemylimiter_350_instances, enemyfirespitter_1385_instances, 2, 1, (EventFunction)&Frames::col_18_26);
    test_collisions(enemytrooperlaser_2508_instances, enemyelite_2510_instances, 1, 1, (EventFunction)&Frames::col_16_43);
    test_collisions(playercharactersensor_383_instances, enemysporeprojectile_969_instances, 2, 8, (EventFunction)&Frames::col_16_21);
    test_collisions(qualifier_19, minibossflame_1199_instances, 268435456, 1, (EventFunction)&Frames::col_17_25);
    test_collisions(playerreflect_447_instances, enemytrooperlaser_2508_instances, 32, 2, (EventFunction)&Frames::col_5_29);
    test_collisions(layerchangeswitch_404_instances, halfcorkscrewright_942_instances, 2, 1, (EventFunction)&Frames::col_2_20);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2097152, 4, (EventFunction)&Frames::col_2_13);
    test_collisions(playerreflect_447_instances, enemyfragbomb_2049_instances, 64, 2, (EventFunction)&Frames::col_29_36);
    test_collisions(enemylimiter_350_instances, enemyelitemask_2511_instances, 4, 2, (EventFunction)&Frames::col_27_43);
    test_collisions(player_389_instances, enemyfragbomb_2049_instances, 1, 4, (EventFunction)&Frames::col_27_36);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 2, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, enemypellet_863_instances, 1048576, 8, (EventFunction)&Frames::col_8_20);
    ObjectList::iterator it1, it2;
    for (it1 = enemyfragbomb_2049_instances.begin(); it1 != enemyfragbomb_2049_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_36();
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
    for (it1 = enemysporeprojectile_969_instances.begin(); it1 != enemysporeprojectile_969_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_27_21();
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
void Frames::event_func_13966()
{
    // event 194_65
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1)) goto event_194_65_end;
        {
            loop_player01_interruption_control_running = true;
            int times = int(1);
            loop_player01_interruption_control_index = 0;
            while (loop_player01_interruption_control_index < times) {
                loop_player01_interruption_control_65();
                if (!loop_player01_interruption_control_running) break;
                loop_player01_interruption_control_index++;
            }
        }
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_194_65_end: ;
}
void Frames::event_func_13967()
{
    // event 546_65
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_546_65_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_546_65_end;
        FrameObject * single_instance_546_65_0; single_instance_546_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_546_65_0 == NULL)
                    single_instance_546_65_0 = new_obj;
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
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_546_65_end: ;
}
void Frames::event_func_13968()
{
    // event 563_65
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_563_65_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_563_65_end;
        FrameObject * single_instance_563_65_0; single_instance_563_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_563_65_0 == NULL)
                    single_instance_563_65_0 = new_obj;
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
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_563_65_end: ;
}
void Frames::event_func_13969()
{
    // event 697_65
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_697_65_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_697_65_end;
        FrameObject * single_instance_697_65_0; single_instance_697_65_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_697_65_0 == NULL)
                    single_instance_697_65_0 = new_obj;
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
                loop_spawndebris_65();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_697_65_end: ;
}
void Frames::event_func_13970()
{
    // event 1428_65
    {
        if (!(group_main_engine_1)) goto event_1428_65_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) > (0))) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1428_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (45))) goto event_1428_65_end;
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(5, 0);
            ((Active*)*it)->alterables->values.set(7, 0);
        }
    }
    event_1428_65_end: ;
}
void Frames::event_func_13971()
{
    // event 1431_65
    {
        if (!(group_main_engine_1)) goto event_1431_65_end;
        objecttransporterstart2_3416_instances.clear_selection();
        for (ObjectIterator it(objecttransporterstart2_3416_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(objecttransporterstart_3412_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*24);
            ((Active*)*it)->set_y(((Active*)get_instance(objecttransporterstart_3412_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0))*24);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+10)%math_helper%360);
        }
    }
    event_1431_65_end: ;
}
void Frames::event_func_13972()
{
    // event 1432_65
    {
        if (!(group_main_engine_1)) goto event_1432_65_end;
        objecttransporternode0_3415_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(objecttransporternode0_3415_instances, objecttransporterstart_3412_instances)) goto event_1432_65_end;
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
        }
        for (ObjectIterator it(objecttransporternode0_3415_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1432_65_end: ;
}
void Frames::event_func_13973()
{
    // event 1433_65
    {
        if (!(group_main_engine_1)) goto event_1433_65_end;
        objecttransporternode180_3426_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(objecttransporternode180_3426_instances, objecttransporterstart_3412_instances)) goto event_1433_65_end;
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 180);
        }
        for (ObjectIterator it(objecttransporternode180_3426_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1433_65_end: ;
}
void Frames::event_func_13974()
{
    // event 1434_65
    {
        if (!(group_main_engine_1)) goto event_1434_65_end;
        objecttransporternode270_3417_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(objecttransporternode270_3417_instances, objecttransporterstart_3412_instances)) goto event_1434_65_end;
        for (ObjectIterator it(objecttransporterstart_3412_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 270);
        }
        for (ObjectIterator it(objecttransporternode270_3417_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1434_65_end: ;
}
void Frames::event_func_13975()
{
    // event 1435_65
    {
        if (!(group_main_engine_1)) goto event_1435_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (95))) goto event_1435_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (8))) goto event_1435_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1435_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1435_65_end;
        player_389_instances.clear_selection();
        objecttransporterstart_3412_instances.clear_selection();
        if (!check_overlap(player_389_instances, objecttransporterstart_3412_instances)) goto event_1435_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 95);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.set(0, ((Active*)get_single(objecttransporterstart_3412_instances, default_active_instance))->alterables->values.get(0));
        {
            FrameObject * parent = ((Active*)get_single(objecttransporterstart_3412_instances));
            if (parent == NULL) goto pos_end_1435_65_0;
            ((Active*)get_instance(objecttransporterwave_3414_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1435_65_0: ;
        }
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_single(objecttransporterstart_3412_instances, default_active_instance))->get_x());
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_single(objecttransporterstart_3412_instances, default_active_instance))->get_y());
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
        ((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->flags.enable(1);
    }
    event_1435_65_end: ;
}
void Frames::event_func_13976()
{
    // event 1436_65
    {
        if (!(group_main_engine_1)) goto event_1436_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1436_65_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) < (1))) goto event_1436_65_end;
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(3, 2);
    }
    event_1436_65_end: ;
}
void Frames::event_func_13977()
{
    // event 1437_65
    {
        if (!(group_main_engine_1)) goto event_1437_65_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (95))) goto event_1437_65_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(19, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(20, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(21, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(23, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)+cos_deg(((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0))*20);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(24, ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)+sin_deg(((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0))*-20);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_max(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 15));
        ((Active*)get_instance(objecttransporterwave_3414_instances))->move_front();
        {
            FrameObject * parent = ((Active*)get_instance(player_389_instances));
            if (parent == NULL) goto pos_end_1437_65_0;
            ((Active*)get_instance(objecttransporterwave_3414_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1437_65_0: ;
        }
        ((Active*)get_instance(objecttransporterwave_3414_instances))->set_angle(((Active*)get_instance(objecttransporterwave_3414_instances))->alterables->values.get(0), 0);
        ((Active*)get_instance(playerskinsash_418_instances))->force_speed(100);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_speed(100);
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(100);
        }
        FrameObject * single_instance_1437_65_1; single_instance_1437_65_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(objecttransporterwave_3414_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsspadeimage_321(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1437_65_1 == NULL)
                    single_instance_1437_65_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1437_65_1))->set_direction(28);
        ((Active*)((Active*)single_instance_1437_65_1))->set_angle(((Active*)get_instance(objecttransporterwave_3414_instances))->get_angle(), 0);
    }
    event_1437_65_end: ;
}
